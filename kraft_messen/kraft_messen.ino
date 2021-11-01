/*
   Projekt: Kräfte messen mit Dünnfilm-Drucksensoren

   Komponenten: SEN-Pressure10 (mit 10kOhm Widerstand)
                MEGA 2560

   Stand: 01.11.2021

   Heiko Hillenhagen
*/

int sensor;
char sensor_name[15] = "Sensor";
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
    
  //sensor1 = analogRead(A0);
  //sensor2 = analogRead(A1);
  //sensor3 = analogRead(A2);

  // Serial.print("Sensor 1:");
  // Serial.println(sensor1);
  // Serial.print("Sensor 2:");
  // Serial.println(sensor2);
  // Serial.print("Sensor 3:");
  // Serial.println(sensor3);

  
}
