void Pendolo(){
  if(confere==false){
    FastLED.clear();
    FastLED.show();
    confere=true;
  }
  
  for(int f=13; f<31; f++){
          Halo[f+1] = CRGB::Green;
          FastLED.setBrightness(brilho);
          FastLED.show();
          delay(30); 
          Halo[f] = CRGB::Black;
          FastLED.show();
  }
         for(int f=31; f>13; f--){
          Halo[f-1] = CRGB::Red;
          FastLED.setBrightness(brilho);
          FastLED.show();
          delay(30); 
          Halo[f] = CRGB::Black;
          FastLED.show();
  } 
  
}
