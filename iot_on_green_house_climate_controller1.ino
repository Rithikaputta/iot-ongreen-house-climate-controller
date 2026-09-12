#include <LiquidCrystal.h>

// LCD pins (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

// Potentiometers to simulate sensors
int tempPot = A0;   // Temperature control
int humPot  = A1;   // Humidity control
int lightPot = A2;  // Light control

// Actuators
int fan = 8;
int pump = 9;
int led = 10;

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);

  pinMode(fan, OUTPUT);
  pinMode(pump, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // Read potentiometers 
  int tempVal = analogRead(tempPot);
  int humVal  = analogRead(humPot);
  int lightVal = analogRead(lightPot);

  // Scale values
  float temperature = map(tempVal, 0, 1023, 15, 45);   // 15°C to 45°C
  float humidity    = map(humVal, 0, 1023, 20, 90);    // 20% to 90%
  int lightLevel    = map(lightVal, 0, 1023, 0, 100);  // 0–100%

  // Display on LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T:"); lcd.print(temperature); lcd.print((char)223); lcd.print("C");
  lcd.setCursor(9, 0);
  lcd.print("H:"); lcd.print(humidity); lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("L:"); lcd.print(lightLevel); lcd.print("%");

  // Control logic
  if (temperature > 30) {
    digitalWrite(fan, HIGH);  // Fan ON
    lcd.setCursor(9, 1); lcd.print("FAN ON ");
  } else {
    digitalWrite(fan, LOW);
    lcd.setCursor(9, 1); lcd.print("FAN OFF");
  }

  if (humidity < 40) {
    digitalWrite(pump, HIGH);  // Pump ON
  } else {
    digitalWrite(pump, LOW);
  }

  if (lightLevel < 40) {
    digitalWrite(led, HIGH);   // LED ON
  } else {
    digitalWrite(led, LOW);
  }

  // Debugging on Serial Monitor
  Serial.print("Temp: "); Serial.print(temperature); Serial.print(" C | ");
  Serial.print("Humidity: "); Serial.print(humidity); Serial.print(" % | ");
  Serial.print("Light: "); Serial.print(lightLevel); Serial.println(" %");

  delay(500);
}

