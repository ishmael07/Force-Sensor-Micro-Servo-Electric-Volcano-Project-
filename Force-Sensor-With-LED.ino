int fsrAnalogPin = 0;  // FSR Should be Connected to Analog Pin A0 on Arduino Board
int LEDpin = 11; // Wire your LED to Pin 11 on Arduino
int fsrReading; // variable for FSR ADC/Analog Reading
int LEDbrightness; // Brightness of LED

void setup(void) {

Serial.begin(9600); 
pinMode(LEDpin, OUTPUT);
} 

void loop(void) { 

fsrReading = analogRead(fsrAnalogPin);
Serial.print("Analog Reading = ")
Serial.println(fsrReading); 

LEDbrightness = map(fsrReading, 0, 1023, 0, 255);

analogWrite(LEDpin, LEDbrightness); 

delay(100);
}
