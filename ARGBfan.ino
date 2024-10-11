#include <FastLED.h>

#define DATA_PIN    3
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB
#define NUM_LEDS    17
CRGB leds[NUM_LEDS];

#define BRIGHTNESS  100

void setup() {
  delay(3000); // 3 second delay for recovery
  
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
  
  // Set all LEDs to white
  fill_solid(leds, NUM_LEDS, CRGB::White);
  FastLED.show();
}

void loop() {
  // Nothing needed here, as LEDs will remain white
}
