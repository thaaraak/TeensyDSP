#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

AudioControlSGTL5000 ctl;
AudioAmplifier amp;

AudioInputI2S            i2s1;           //xy=233,194
AudioOutputI2S           i2s2;           //xy=743,192
AudioConnection          patchCord1(i2s1, 0, i2s2, 0);
AudioConnection          patchCord2(i2s1, 1, i2s2, 1);


void setup() {
  // put your setup code here, to run once:

  AudioMemory(160);
  ctl.enable();
  ctl.volume(0.8);
  ctl.inputSelect(AUDIO_INPUT_LINEIN);
}

void loop() {
  // put your main code here, to run repeatedly:

}
