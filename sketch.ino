#define pot 36
int LED = 26;

void setup(){
  //initalize serial communication at 9600 bits per second
  Serial.begin(115200);
pinMode(pot, INPUT);
pinMode(LED, OUTPUT);
}

void loop(){
  //reads the input on analog pin (value between 0 and 4095)
  int analogValue = analogRead(pot);
  float z1=analogValue;
  Serial.print("Voltage = ");
  Serial.println(analogValue);
  
  //raw analog reading
  float z2=z1*5/4095;
Serial.print("Analog Value = ");
  Serial.println(z2);
  
  if(z2>3.5){
    digitalWrite(LED, HIGH);
  }

  else{
    digitalWrite(LED, LOW);
  }

  delay(1000);
}
