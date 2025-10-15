void LigaDesliga(){
  //SO FUNCIONA EM MINUTO PAR
  rtc.read();
  int min=rtc.minute;
  while (confere == false){
    int sec=rtc.second;
    
    pos = (sec/2) + (sec/4);

    if (count!=pos){
      count = pos;
    }
    
    for(int k=0;k<=count;k++){
        Halo[k]=cor[min%9];
        FastLED.setBrightness(brilho);
        FastLED.show();

      }
      confere=true;
        
  }
  if (min%2==0){
    if (count<45){
        int min=rtc.minute;
        Halo[count] = cor[min%9];
        FastLED.setBrightness(brilho);
        FastLED.show();
        count= count+1;
        delay(1333);
                 
      } else {
      confere=false;
      }

  }else{
    if (count<45){
      Halo[count] = CRGB::Black;
        FastLED.setBrightness(brilho);
        FastLED.show();
        count= count+1;
        delay(1333);
    } else {
      confere=false;
    }
  }
}
