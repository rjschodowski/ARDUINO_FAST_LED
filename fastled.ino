/* The goal is to get Purple, Orange, and Green to blink for 1/2 second each. This will be implemented into a larger project I am doing with my apprentice teammate for 
an Arduino Maze Race conducted at Bosch. 
*/

#include "FastLED.h"
#define PIN_RBGLED 4
#define NUM_LEDS 1

CRGB leds[NUM_LEDS];

void setup() {
  Serial.begin(9600);
  FastLED.addLeds<WS2812, PIN_RBGLED>(leds, NUM_LEDS);
  FastLED.setBrightness(50); 
  }

void loop() {
  leds[0] = CRGB::Red;
  FastLED.show();
  delay(500);
  leds[0] = CRGB::Black;
  FastLED.show();
  delay(500);
  leds[0] = CRGB::Green;
  FastLED.show();
  delay(500);
  leds[0] = CRGB::Black;
  FastLED.show();
  delay(500);
  leds[0] = CRGB::Blue;
  FastLED.show();
  delay(500);
  leds[0] = CRGB::Black;
  FastLED.show();
  delay(500);
}
