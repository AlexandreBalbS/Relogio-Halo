void Desbotando() {
  if (confere == false) {
    FastLED.clear();
    FastLED.show();
    confere = true;
  }
  static uint8_t hue;
  for(int k=0;k<5;k++){
  for (int h = 0; h < 15; h++) {  //BRILHA
    for (int m = k; m < 45; m=m+4) {
      Halo[m] = CHSV(hue++, 255, 255);
    }  //fim for(i)
    FastLED.setBrightness(h);
    FastLED.show();
    delay(50);
  }                               // fim for(j)
  for (int h = 15; h > 0; h--) {  //DESBOTA
    for (int m = k; m < 45; m=m+4) {
      Halo[m] = CHSV(hue++, 255, 255);
    }  // fim for(i)
    FastLED.setBrightness(h);
    FastLED.show();
    delay(50);
  }  // fim for(h)
  FastLED.clear();
  FastLED.show();
  }// fim for(k)
  return;
}
