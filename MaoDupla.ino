void MaoDupla(){
  rtc.read();
  int min=rtc.minute;
  if (confere == false){
    rtc.read();
    int sec=rtc.second;
    
    pos = (sec/2) + (sec/4);

    if (count!=pos){
      count = pos;
    }
    FastLED.clear();
    FastLED.show();
    if(count!=0 && confere==false){
          rtc.read();
          if (min%9<3){
            for(int k=0; k<count+1; k++){
              Halo[k] = CRGB::Blue;
              Halo[44-k] = CRGB::DarkGoldenrod;
              FastLED.setBrightness(brilho);
              FastLED.show();
            }
          } rtc.read();
          if (min>=3 && min%9<6){
            for(int k=0; k<count+1; k++){
              Halo[k] = CRGB::Green;
              Halo[44-k] = CRGB::Red;
              FastLED.setBrightness(brilho);
              FastLED.show();
            }
          }rtc.read();
          if (min%9>=6){
            for(int k=0; k<count+1; k++){
              Halo[k] = CRGB::DarkViolet;
              Halo[44-k] = CRGB::OrangeRed;
              FastLED.setBrightness(brilho);
              FastLED.show();
            }
          }
          confere=true;
        }
  } 
     rtc.read(); 
    if (min%9<3){
      if (count<45){
        
        Halo[count] = CRGB::Blue;
        Halo[44-count] = CRGB::DarkGoldenrod;
        FastLED.setBrightness(brilho);
        FastLED.show();
        count= count+1;
        delay(1330);
                        
      } else {
        
        FastLED.clear();
        FastLED.show();
        count=0;
        confere=false;
      }
    } rtc.read();
    if (min%9>=3 && min%9<6){
      if (count<45){
        Halo[count] = CRGB::Green;
        Halo[44-count] = CRGB::Red;
        FastLED.setBrightness(brilho);
        FastLED.show();
        count= count+1;
        delay(1330);
                        
      } else {
        
        FastLED.clear();
        FastLED.show();
        count=0;
        confere=false;
      }

    } rtc.read();
      if (min%9>=6){
      if (count<45){
        
        Halo[count] = CRGB::DarkViolet;
        Halo[44-count] = CRGB::OrangeRed;
        FastLED.setBrightness(brilho);
        FastLED.show();
        count= count+1;
        delay(1330);
                        
      } else {
        
        FastLED.clear();
        FastLED.show();
        count=0;
        confere=false;
      }
    }
  
}
