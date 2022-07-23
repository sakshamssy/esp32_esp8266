/*********
  Rui Santos
  Complete project details at http://randomnerdtutorials.com  
*********/
//https://randomnerdtutorials.com/esp32-dual-core-arduino-ide/
void setup() {
  Serial.begin(115200);
  Serial.print("setup() running on core ");
  Serial.println(xPortGetCoreID());
}

void loop() {
  Serial.print("loop() running on core ");
  Serial.println(xPortGetCoreID());
}
