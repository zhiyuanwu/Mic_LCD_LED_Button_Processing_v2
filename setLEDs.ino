void setLEDs(int noiseLevel) {
  int nL = noiseLevel;//noise level from microphone
  startingValue = 100;
  ///////////////////////////////////////////////////////////////
  // <100
  if (nL <= startingValue) {//all green
    for (int n = 0; n <= 7; n++) {
      strip.setPixelColor(n, 0, 255, 0);
      /*  for (int n = 1; n <= 7; n++) {
          strip.setPixelColor(n, 0, 0, 0);
        }*/
    }
    strip.show();
  }

  ///////////////////////////////////////////////////////////////
  // 100<200
  else if (nL > startingValue && nL <= startingValue + 100) {
    for (int n = 0; n <= 7; n++) {
      strip.setPixelColor(n, 0, 255, 0);
    }
    strip.show();
  }

  ///////////////////////////////////////////////////////////////
  // 200<300
  else if (nL > startingValue + 100 && nL <= startingValue + 200) {
    for (int n = 0; n <= 7; n++) {
      strip.setPixelColor(n, 0, 255, 0);
    }
    strip.show();
  }

  ///////////////////////////////////////////////////////////////
  // 300<400

  else if (nL > startingValue + 200 && nL <= startingValue + 300) {
    for (int n = 0; n <= 7; n++) {
      strip.setPixelColor(n, 255, 200, 0);
    }
    strip.show();
  }
  ///////////////////////////////////////////////////////////////
  // 400<500
  else if (nL > startingValue + 300 && nL <= startingValue + 400) {
    for (int n = 0; n <= 7; n++) {
      strip.setPixelColor(n, 255, 200, 0);
    }
    strip.show();
  }

  ///////////////////////////////////////////////////////////////
  // 500<600

  else if (nL > startingValue + 400 && nL <= startingValue + 500) {
    for (int n = 0; n <= 7; n++) {
      strip.setPixelColor(n, 255, 200, 0);
    }
    strip.show();
  } ///////////////////////////////////////////////////////////////
  // 600<700

  else if (nL > startingValue + 500 && nL <= startingValue + 600) {
    for (int n = 0; n <= 7; n++) {
      strip.setPixelColor(n, 255, 0, 0);
    }
    strip.show();
  }

  ///////////////////////////////////////////////////////////////
  // >700

  else if (nL > startingValue + 600) {
    for (int n = 0; n <= 7; n++) {
      strip.setPixelColor(n, 255, 0, 0);
    }
    strip.show();
  }



}
