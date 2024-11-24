#include <IRremote.hpp>
#define IR_RECEIVE_PIN 2
#define BULB_PIN 8

bool bulbOn = false;
void setup() {
Serial.begin(9600);
Serial.println("IR Remote Control Setup");
IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
pinMode(BULB_PIN, OUTPUT);
digitalWrite(BULB_PIN, LOW);
Serial.println("Setup complete.");
}

void loop() {
if (IrReceiver.decode()) {
Serial.print("Received IR code: ");
Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
Serial.print("IR Data: ");
IrReceiver.printIRResultShort(&Serial);
Serial.print("IR Send Code: ");
IrReceiver.printIRSendUsage(&Serial);
switch (IrReceiver.decodedIRData.decodedRawData) {
case 0xFF00BF00:
bulbOn = !bulbOn;
digitalWrite(BULB_PIN, bulbOn ? HIGH : LOW);
Serial.print("Bulb is turned ");
Serial.println(bulbOn ? "ON" : "OFF");
break;
}
IrReceiver.resume();
}
}
