void Circulando(){
  
      static uint8_t hue;
      for (int k=0; k < 45; k++){
        Halo[k]=CHSV(hue++,255,255);
        delay(30);
        FastLED.setBrightness(brilho);
        FastLED.show();
      }
    
  return; 
}
