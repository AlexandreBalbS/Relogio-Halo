void displayMsg(int n,int *name){
  
  digitalWrite(LED_BUILTIN, 0);
  digitalWrite(botao,0);
  millison1=millis();
  
  if (millison1-millisoff1 >= 500){
    if (position<n){
        position = position +1;
    } else {
      position=0;
    }
    millisoff1=millison1;
    
  }
  switch(position){
    case(0):
    digitalWrite(pinA[3],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i],displayAlfa[name[position]][i]);
    
      }
      delay(wait);
      digitalWrite(pinA[3],0);
            
    break;
    case(1):
      digitalWrite(pinA[3],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i],displayAlfa[name[position]][i]);
    
      }
      delay(wait);
      digitalWrite(pinA[3],0);
      
      digitalWrite(pinA[2],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i],displayAlfa[name[position-1]][i]);
    
      }
      delay(wait);
      digitalWrite(pinA[2],0);
      
    break;

  case(2):
      digitalWrite(pinA[3],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i],displayAlfa[name[position]][i]);
    
      }
      delay(wait);
      digitalWrite(pinA[3],0);
      
      digitalWrite(pinA[2],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i],displayAlfa[name[position-1]][i]);
    
      }
      delay(wait);
      digitalWrite(pinA[2],0);
      
      digitalWrite(pinA[1],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i],displayAlfa[name[position-2]][i]);
    
      }
      delay(wait);
      digitalWrite(pinA[1],0);
    break;
    case(3):
      digitalWrite(pinA[3],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i],displayAlfa[name[position]][i]);
    
      }
      delay(wait);
      digitalWrite(pinA[3],0);
           
      digitalWrite(pinA[2],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i],displayAlfa[name[position-1]][i]);
    
      }
      delay(wait);
      
      digitalWrite(pinA[2],0);
      
      digitalWrite(pinA[1],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i],displayAlfa[name[position-2]][i]);
    
      }
      delay(wait);
      digitalWrite(pinA[1],0);
      
      digitalWrite(pinA[0],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i],displayAlfa[name[position-3]][i]);
    
      }
      delay(wait);
      digitalWrite(pinA[0],0);
      
    break;
  }

    if(position>3 && position<n){

      digitalWrite(pinA[3],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i],displayAlfa[name[position]][i]);
    
      }
      delay(wait);
      digitalWrite(pinA[3],0);
           
      digitalWrite(pinA[2],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i],displayAlfa[name[position-1]][i]);
    
      }
      delay(wait);
      digitalWrite(pinA[2],0);
      
      digitalWrite(pinA[1],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i],displayAlfa[name[position-2]][i]);
    
      }
      delay(wait);
      
      digitalWrite(pinA[1],0);
      
      digitalWrite(pinA[0],1);
      for (int i=0; i<7; i++){
        digitalWrite(pinB[i],displayAlfa[name[position-3]][i]);
    
      }
      delay(wait);
      
      digitalWrite(pinA[0],0);
      
    }


return;   
}
