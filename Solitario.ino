void Solitario(){
if (confere == false){
  rtc.read();
    
    pos = (rtc.second/2) + (rtc.second/4);
    if (count!=pos){
      count = pos;
    }
    confere=true;
    FastLED.clear();
    FastLED.show();
    
  }

  if (count < 45){
    rtc.read();
    int min=rtc.minute;
    Halo[count]=cor[min%9];
    FastLED.setBrightness(brilho);
    FastLED.show();
    delay(1333);
    count=count+1;
    Halo[count-1]=CRGB::Black;
  } else {
    count=0;
    confere=false;
  }
}
