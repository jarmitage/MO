/*
  Morse.h - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/
#ifndef Shield_h
#define Shield_h

#include "Arduino.h"
#include <Bounce2.h>

class Shield
{
  public:
    Shield();
    void update();
    void potInput();
    void buttonInput();
  private:
    int potPrevs[3][4]; //used to store previous values for pots
    int potSends[4];
    
    Bounce * button = new Bounce[4]; // Create Bounce objects for each button.
    const int NUM_USERCONTROLS = 4;
};

#endif
