void chrome(){
    if (confere==false){
      FastLED.clear();
      FastLED.show();
      confere = true;
    } 
  for ( int w=0; w<44; w=w+11){
    for(int k=0; k<11; k++){
      if(w==0){
        Halo[0]=CRGB::Blue;
      }
      Halo[k+w+1]=CRGB::Blue;

      if((k+w+11)>=44 && (k+w+11)<55){
         Halo[k]=CRGB::Yellow;
       
      } else {
        Halo[k+w+11]=CRGB::Yellow;
      }

      if((k+w+22)>=44 && (k+w+22)<55){
        Halo[k]=CRGB::Red;

      } if ((k+w+22)>=55 && (k+w+22)<66){
        Halo[k+11]=CRGB::Red;

      } if ((k+w+22)>=66){
        Halo[k+22]=CRGB::Red;
      
      } else {
        Halo[k+w+22]=CRGB::Red;
      }
      
      if((k+w+33)>=44 && (k+w+33)<55){
        Halo[k]=CRGB::Green;

      } if ((k+w+33)>=55 && (k+w+33)<66){
        Halo[k+11]=CRGB::Green;

      } if ((k+w+33)>=66){
        Halo[k+22]=CRGB::Green;

      } else {
        Halo[k+w+33]=CRGB::Green;
      }
    } //fim for(k)
    for(int h=0;h<10; h++){
      FastLED.setBrightness(h);
      FastLED.show();
      delay(75);
    }
    for(int h=10;h>0; h--){
      FastLED.setBrightness(h);
      FastLED.show();
      delay(75);
    }
  }// fim for (w)
    
}
