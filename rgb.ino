#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel pixels(8, 6, NEO_GRB + NEO_KHZ800);
void setup() {
  // put your setup code here, to run once:
  pixels.begin();
  pixels.show();
}

void loop() {

  /*for(int i=0;i<=7;i++){
    pixels.setPixelColor(i, pixels.Color(183, 96, 26));
    pixels.show();
    delay(150);
    }
  for(int i=7;i>=0;i--){
    pixels.setPixelColor(i, pixels.Color(0, 40, 150));
    pixels.show();
    delay(150);
    }
    for(int i=7;i>=0;i--){
    pixels.setPixelColor(i*2, pixels.Color(150,0, 30));
    pixels.show();
    delay(350);
    }*/
    pixels.setPixelColor(0, pixels.Color(243,63, 53));
    pixels.setPixelColor(1, pixels.Color(54,63, 70));
    pixels.setPixelColor(2, pixels.Color(32,149, 242));
    pixels.setPixelColor(3, pixels.Color(1,149, 135));
    pixels.setPixelColor(4, pixels.Color(75,175, 79));
    pixels.setPixelColor(5, pixels.Color(254,234, 59));
    pixels.setPixelColor(6, pixels.Color(249,10, 130));
    pixels.setPixelColor(7, pixels.Color(150,0, 230));
    pixels.show();
}
