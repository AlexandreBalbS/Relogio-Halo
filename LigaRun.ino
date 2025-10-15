void LigaRun(){
    // PROCURA POSIÇÃO DOS SEGUNDOS
    rtc.read();
    int min=rtc.minute;
    if (confere == false){
      rtc.read();
      pos = (rtc.second/2) + (rtc.second/4);
      
      if (count!=pos){
        count = pos;
      }
      FastLED.clear();
      FastLED.show();
      for (int k=0; k<count;k++){
        Halo[k] = cor[min%9];
        FastLED.setBrightness(brilho);
        FastLED.show();  
    } rtc.read();
    corlocal=rtc.minute%9;
    confere=true;
    }
    
    // EFEITO RUN

  while(count<45){
        Halo[count] = cor[corlocal];
        FastLED.setBrightness(brilho);
        FastLED.show();
        count= count+1;
        //confere=true;
        delay(630);
        for(int f=count; f<46; f++){
          Halo[f+1] = cor[corlocal];
          FastLED.setBrightness(brilho);
          FastLED.show();
          delay(30);
          if(count>0){
            Halo[f] = CRGB::Black;
            FastLED.show();
          }
        }                
      }
      confere=false;
       
}
