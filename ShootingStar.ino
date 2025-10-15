void shootingStar(int cores) {

switch (cores){
  case(0):
    shootingStarAnimation(0, 250, 0, random(10, 60), random(5, 40), random(1000, 3500), 1);
  break;
  case(1):
    shootingStarAnimation(0, 0, 250, random(10, 60), random(5, 40), random(1000, 3500), 1);
  break;
  case(2):
    shootingStarAnimation(250, 0, 0, random(10, 60), random(5, 40), random(1000, 3500), 1);
  break;
}

  FastLED.setBrightness(30);
  
  
    //shootingStarAnimation(0, 250, 0, random(10, 60), random(5, 40), random(1000, 3500), -1);
   
  
  
    //shootingStarAnimation(0, 0, 250, random(10, 60), random(5, 40), random(1000, 3500), 1);
    
  
//  unsigned long previousMillis = 0;           // Stores last time LEDs were updated
//  int count = 0;                              // Stores count for incrementing up to the NUM_LEDs
}
void shootingStarAnimation(int red, int green, int blue, int tail_length, int delay_duration, int interval, int direction){
  /*
   * red - 0 to 255 red color value
   * green - 0 to 255 green color value
   * blue - 0 to 255 blue color value
   * tail_length - value which represents number of pixels used in the tail following the shooting star
   * delay_duration - value to set animation speed. Higher value results in slower animation speed.
   * interval - time between each shooting star (in miliseconds)
   * direction - value which changes the way that the pixels travel (uses -1 for reverse, any other number for forward)
  */
  unsigned long currentMillis = millis();   // Get the time
  if (currentMillis - previousMillis >= random(1000,3500)) {
    previousMillis = currentMillis;         // Save the last time the LEDs were updated
    caunt = 0;                              // Reset the count to 0 after each interval
  }
  if (direction == -1) {        // Reverse direction option for LEDs
    if (caunt < Leds) {
      Halo[Leds - (caunt % (Leds+1))].setRGB(red, green, blue);    // Set LEDs with the color value
      caunt++;
    }
  }
  else {
    if (caunt < Leds) {     // Forward direction option for LEDs
      Halo[caunt % (Leds+1)].setRGB(red, green, blue);    // Set LEDs with the color value
      caunt++;
    }
  }
  fadeToBlackBy(Halo, Leds, tail_length);                 // Fade the tail LEDs to black
  FastLED.show();
  delay(random(5, 40));                                      // Delay to set the speed of the animation
}
