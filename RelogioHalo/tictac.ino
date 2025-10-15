void tictac(){
  int hora=0, minuto=0, segundo=0; 
  hora = myRTC.getHour(h12, hpm);
  minuto = myRTC.getMinute();
  segundo = myRTC.getSecond();
  temp = myRTC.getTemperature()-4;
  
  int dhora = hora/10;
  int uhora = hora%10;
  int usegundo = segundo%10;
  int dsegundo = segundo/10;

  int dminuto = minuto/10;
  int uminuto = minuto%10;
  
  
      if (segundo==10 || segundo==25 || segundo==35 || segundo==50){
        digitalWrite(LED_BUILTIN, 0);
        digitalWrite(botao, 0);
        int timer = segundo;
        for(int i=timer; i<timer+2; i=myRTC.getSecond()){
          digitalWrite(pinA[0],1);
          for (int i=0; i<7;i++){
            digitalWrite(pinB[i], display[temp/10][i]);
          } 
          delay(wait);
          digitalWrite(pinA[0],0);
          
          digitalWrite(pinA[1],1);
          for (int i=0; i<7;i++){
          digitalWrite(pinB[i], display[temp%10][i]);
          } 
          delay(wait);
          digitalWrite(pinA[1],0);
          
          digitalWrite(pinA[2],1);
          for (int i=0; i<7;i++){
          digitalWrite(pinB[i], displayAlfa[9][i]);
          } 
          delay(wait);
          digitalWrite(pinA[2],0);
          
          digitalWrite(pinA[3],1);
          for (int i=0; i<7;i++){
          digitalWrite(pinB[i], displayAlfa[1][i]);
          } 
          delay(wait);
          digitalWrite(pinA[3],0);
          
        }
    
      }

      if (hora<10){
      digitalWrite(pinA[0],1);
      for (int i=0; i<7;i++){
        digitalWrite(pinB[i], display[0][i]);
      }
      delay(wait);
      digitalWrite(pinA[0],0);
            
      digitalWrite(pinA[1],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i], display[uhora][i]);
      }
      delay(wait);
      digitalWrite(pinA[1],0);
      

    } else {
      digitalWrite(pinA[0],1);
      for (int i=0; i<7;i++){
        digitalWrite(pinB[i], display[dhora][i]);
      }
      delay(wait);
      digitalWrite(pinA[0],0);
      
      
      digitalWrite(pinA[1],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i], display[uhora][i]);
      }
      delay(wait);
      digitalWrite(pinA[1],0);
      
      
    }





    if (minuto<10){
      digitalWrite(pinA[2],1);
      for (int i=0; i<7;i++){
        digitalWrite(pinB[i], display[0][i]);
      } 
       delay(wait);
      digitalWrite(pinA[2],0);
      
      
      digitalWrite(pinA[3],1);
      for (int j=0; j<7; j++){
        digitalWrite(pinB[j], display[uminuto][j]);
      }
      delay(wait);
      digitalWrite(pinA[3],0);
      
      
    } else {
      digitalWrite(pinA[2],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i],display[dminuto][i]);
      }
      delay(wait);
      digitalWrite(pinA[2],0);
      
      
      digitalWrite(pinA[3],1);
      for (int w=0; w<7; w++){
        digitalWrite(pinB[w],display[uminuto][w]);
      }
      delay(wait);
      digitalWrite(pinA[3],0);
      
      
    }
    

  millison=millis();
  if (millison-millisoff >= 500){
    if(cont==0){
      digitalWrite(LED_BUILTIN, 1);
      digitalWrite(botao, 1);
      cont=1;
      
    } else {
      digitalWrite(LED_BUILTIN, 0);
      digitalWrite(botao, 0);
      cont=0;
    }
    millisoff=millison;
  }
  

}
