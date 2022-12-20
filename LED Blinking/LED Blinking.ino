// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(11, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(11, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(11, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(11, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
}