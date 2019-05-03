// CONEXIONES:
// PIN 11 => RES (>=150) => LED (ir) => GND
// PIN 4 => OUT (tssp)

// Genera 38kHz al LED (pin 11)
// Dice por Serial si está viendo el TSSP o no (binario).

void setup() {
  pinMode(4, INPUT);
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  TCCR2A = _BV(COM2A0) | _BV(WGM21);
  TCCR2B = _BV(CS20);
  OCR2A = 210;
}

void loop() {
  Serial.println(digitalRead(4));
}
