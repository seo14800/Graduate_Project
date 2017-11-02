
int moisture = 0;
int water = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Running...");
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  
}

void waterpump() {
  if(moisture <= 100)
  {
    digitalWrite(12, HIGH);
  }
  else
  {
    digitalWrite(12, LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  moisture = analogRead(A0);
  water = analogRead(A1);


  Serial.print("moisture : ");
  Serial.println(moisture);

  Serial.print("water : ");
  Serial.println(water);
  
  waterpump();
  digitalWrite(13, HIGH);

  delay(1000);
}


