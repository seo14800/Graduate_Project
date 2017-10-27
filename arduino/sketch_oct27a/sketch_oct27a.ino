int analogPin = 0;    // 워터센서 analog port 0 연결 선언
int led = 13;         // LED 디지털 13번 포트 연결 선언
int val = 0;          // 전류변화값 변수선언
 
void setup ()
{
  pinMode(led, OUTPUT);            // 디지털 13번 포트를 LED OUTPUT 으로 설정
  Serial.begin (9600);           // 시리얼모니터 설정
}
 
void loop()
{
  val = analogRead(analogPin);   // analogPin 의 변화값(전류값)을 읽음
 
  if (val > 100)                 // val 값이 100이 넘으면 (전류가 100이 넘으면)
  {                               
      digitalWrite(led, HIGH);   // LED ON
  }
  else                           // val 값이 100이하면 (전류가 100이하면)
  {
      digitalWrite(led, LOW);    // LED OFF
  }
  
  Serial.println(val);      // 시리얼모니터에 전류값 표시
  delay (500);
}
