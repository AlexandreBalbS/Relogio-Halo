void LigaTodos(){
  rtc.read();
  if (confere == false){
    int sec=rtc.second;
    int min=rtc.minute;
    pos = (sec/2) + (sec/4);
    if (count!=pos){
      count = pos;
    }
    confere=true;
    FastLED.clear();
    FastLED.show();
    for(int k=0;k<=count;k++){
        Halo[k]=cor[min%9];
        FastLED.setBrightness(brilho);
        FastLED.show();

      }
  }
  if (count<45){
    int min=rtc.minute;
      Halo[count] = cor[min%9];
      FastLED.setBrightness(brilho);
      FastLED.show();
      count= count+1;
      delay(1335);
                   
    } else {
      
      FastLED.clear();
      FastLED.show();
      count=0;
      confere=false;
    }
}
