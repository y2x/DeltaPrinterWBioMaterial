int valvePin = 3;

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  pinMode(valvePin, OUTPUT);
}

void loop() {
//  put your main code here, to run repeatedly:
 //if(Serial.available() > 0){
  
   //static int v = Serial.read();
   analogWrite(valvePin, 255);
 //}
  //Serial.flush();
} 
