void rotation(){   //{9,10,11,12,14,16,17}
//int tempo=myRTC.getSecond();
  //if(tempo<15){
    //for(int i= tempo; i<tempo+30; i=myRTC.getSecond()){
        digitalWrite(botao,0);
        digitalWrite(pinA[0],1);

            digitalWrite(pinB[3],1);
            delay(100);
            digitalWrite(pinB[3],0);
            digitalWrite(pinB[4],1);
            delay(100);
            digitalWrite(pinB[4],0);
            digitalWrite(pinB[5],1);
            delay(100);
            digitalWrite(pinB[5],0);
            digitalWrite(pinB[0],1);
            delay(100);
            digitalWrite(pinB[0],1);

        digitalWrite(pinA[0],0);
        digitalWrite(pinA[1],1);
            digitalWrite(pinB[0],1);
            delay(100);
            digitalWrite(pinB[0],0);
        
        digitalWrite(pinA[1],0);
        digitalWrite(pinA[2],1);
            digitalWrite(pinB[0],1);
            delay(100);
            digitalWrite(pinB[0],0);

        digitalWrite(pinA[2],0);
        digitalWrite(pinA[3],1);
            digitalWrite(pinB[0],1);
            delay(100);
            digitalWrite(pinB[0],0);
            digitalWrite(pinB[1],1);
            delay(100);
            digitalWrite(pinB[1],0);
            digitalWrite(pinB[2],1);
            delay(100);
            digitalWrite(pinB[2],0);
            digitalWrite(pinB[3],1);
            delay(100);
            digitalWrite(pinB[3],0);
            
        digitalWrite(pinA[3],0);
        digitalWrite(pinA[2],1);
            digitalWrite(pinB[3],1);
            delay(100);
            digitalWrite(pinB[3],0);

        digitalWrite(pinA[2],0);
        digitalWrite(pinA[1],1);
            digitalWrite(pinB[3],1);
            delay(100);
            digitalWrite(pinB[3],0);

        digitalWrite(pinA[1],0);
    //}
  //} else {
    //for(int i= tempo-15; i<tempo; i=myRTC.getSecond()-15){
              digitalWrite(pinA[0],1);

            digitalWrite(pinB[3],1);
            delay(100);
            digitalWrite(pinB[3],0);
            digitalWrite(pinB[4],1);
            delay(100);
            digitalWrite(pinB[4],0);
            digitalWrite(pinB[5],1);
            delay(100);
            digitalWrite(pinB[5],0);
            digitalWrite(pinB[0],1);
            delay(100);
            digitalWrite(pinB[0],1);

        digitalWrite(pinA[0],0);
        digitalWrite(pinA[1],1);
            digitalWrite(pinB[0],1);
            delay(100);
            digitalWrite(pinB[0],0);
        
        digitalWrite(pinA[1],0);
        digitalWrite(pinA[2],1);
            digitalWrite(pinB[0],1);
            delay(100);
            digitalWrite(pinB[0],0);

        digitalWrite(pinA[2],0);
        digitalWrite(pinA[3],1);
            digitalWrite(pinB[0],1);
            delay(100);
            digitalWrite(pinB[0],0);
            digitalWrite(pinB[1],1);
            delay(100);
            digitalWrite(pinB[1],0);
            digitalWrite(pinB[2],1);
            delay(100);
            digitalWrite(pinB[2],0);
            digitalWrite(pinB[3],1);
            delay(100);
            digitalWrite(pinB[3],0);
            
        digitalWrite(pinA[3],0);
        digitalWrite(pinA[2],1);
            digitalWrite(pinB[3],1);
            delay(100);
            digitalWrite(pinB[3],0);

        digitalWrite(pinA[2],0);
        digitalWrite(pinA[1],1);
            digitalWrite(pinB[3],1);
            delay(100);
            digitalWrite(pinB[3],0);

        digitalWrite(pinA[1],0);
    //}

  //}
       return;
}
