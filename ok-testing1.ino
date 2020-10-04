/*This sketch is created by gada888*/
 
const int AirValue = 600; //you need to change this value that you had recorded in t
const int WaterValue = 400; //you need to change this value that you had recorded in th
int intervals = (AirValue - WaterValue)/3;
int soilMoistureValue = 0;
 
int RLed = 2;
int GLed = 3;
int BLed = 4;
 
 int piezoPin = 8; 
 int pitches[] = {523, 587, 659, 698, 784};
 int numPitches = 5;
  
void setup(){
  Serial.begin(9600);
 
  pinMode(RLed, OUTPUT);
  pinMode(GLed, OUTPUT);
  pinMode(BLed, OUTPUT);
}
void loop(){
  soilMoistureValue = analogRead(A0); //put Sensor insert into soil
if(soilMoistureValue > WaterValue && soilMoistureValue < (WaterValue + intervals))
{
Serial.println("Very Wet");
    digitalWrite(RLed, LOW);
    digitalWrite(BLed, LOW);
    digitalWrite(GLed, HIGH); //Green LED
}
else if(soilMoistureValue > (WaterValue + intervals) && soilMoistureValue < (AirValue - intervals))
{
Serial.println("Wet");
    digitalWrite(RLed, LOW);
    digitalWrite(BLed, LOW);
    digitalWrite(GLed, HIGH); //Green LED
}
else if(soilMoistureValue < AirValue && soilMoistureValue > (AirValue - intervals))
{
Serial.println("Dry");
    digitalWrite(RLed, HIGH);
    digitalWrite(BLed, LOW); //Blue LED
    digitalWrite(GLed, LOW);
    int i;
   for( i=0; i<numPitches; i++){
   tone(piezoPin, pitches[i], 200);
   delay(200);
}
delay(100);
}
}
