/*
   Projekt: Kräfte messen mit Dünnfilm-Drucksensoren

   Komponenten: SEN-Pressure10 (mit 10kOhm Widerstand)
                MEGA 2560

   Stand: 01.11.2021

   Heiko Hillenhagen
*/

int sensor;
int sensor1;
int sensor2;
int sensor3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i <= 2; i++) {
    //sensor_name = "Sensor" + i;
    Serial.print("Sensor :");
    Serial.println(i);
    sensor = analogRead(i);
    Serial.println(sensor);
  }
    Serial.println("--------------------");
    delay(1000);
    
}
