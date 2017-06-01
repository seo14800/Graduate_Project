
//#include <Wire.h>
//#include <BH1750.h>

//BH1750 lightMeter;
int moisture = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //lightMeter.begin();
  Serial.println("Running...");
  pinMode(8, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  moisture = analogRead(A0);

  //if(moisture <= 300)
  //  digitalWrite(8, HIGH);
  //else
  //  digitalWrite(8, LOW);
  
  
  //uint16_t lux = lightMeter.readLightLevel();
  
  //Serial.print("Light: ");
  //Serial.print(lux);
  //Serial.println(" lx");


  Serial.print("moisture : ");
  Serial.println(moisture);

  delay(1000);
}


