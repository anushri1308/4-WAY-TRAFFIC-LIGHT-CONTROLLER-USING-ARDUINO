int sgnl1[] = {23, 25, 27};
int sgnl2[] = {46, 48, 50};
int sgnl3[] = {13, 12, 11};
int sgnl4[] = {10, 9, 8};
int rDelay = 5000;
int yDelay = 2000;
void setup() 
{
  for (int i = 0; i < 3; i++)                    // Declaring all LED's as output
  {
    pinMode(sgnl1[i], OUTPUT);
    pinMode(sgnl2[i], OUTPUT);
    pinMode(sgnl3[i], OUTPUT);
    pinMode(sgnl4[i], OUTPUT);
  }
}
void loop()
{  
  digitalWrite(sgnl1[2], HIGH);               // Making Green  LED at signal 1 HIGH and red LED's at other signal HIGH
  digitalWrite(sgnl1[0], LOW);
  digitalWrite(sgnl2[0], HIGH);
  digitalWrite(sgnl3[0], HIGH);
  digitalWrite(sgnl4[0], HIGH);
  delay(rDelay);

  digitalWrite(sgnl1[1], HIGH);               // Making Green LED at signal 1 LOW and making yellow LED at signal 1 HIGH for 2 seconds
  digitalWrite(sgnl1[2], LOW);
  delay(yDelay);
  digitalWrite(sgnl1[1], LOW);
 
  digitalWrite(sgnl1[0], HIGH);               // Making Green  LED at signal 2 HIGH and red LED's at other signal HIGH
  digitalWrite(sgnl2[2], HIGH);
  digitalWrite(sgnl2[0], LOW);
  digitalWrite(sgnl3[0], HIGH);
  digitalWrite(sgnl4[0], HIGH);
  delay(rDelay);

  digitalWrite(sgnl2[1], HIGH);               // Making Green LED at signal 2 LOW and making yellow LED at signal 2 HIGH for 2 seconds
  digitalWrite(sgnl2[2], LOW);
  delay(yDelay);
  digitalWrite(sgnl2[1], LOW);

  digitalWrite(sgnl1[0], HIGH);               // Making Green  LED at signal 3 HIGHand red LED's at other signal HIGH
  digitalWrite(sgnl2[0], HIGH);
  digitalWrite(sgnl3[2], HIGH);
  digitalWrite(sgnl3[0], LOW);
  digitalWrite(sgnl4[0], HIGH);
  delay(rDelay);

  digitalWrite(sgnl3[1], HIGH);               // Making Green LED at signal 3 LOW and making yellow LED at signal 3 HIGH for 2 seconds
  digitalWrite(sgnl3[2], LOW);
  delay(yDelay);
  digitalWrite(sgnl3[1], LOW);

  digitalWrite(sgnl1[0], HIGH);               // Making Green  LED at signal 4 HIGH and red LED's at other signal HIGH
  digitalWrite(sgnl2[0], HIGH);
  digitalWrite(sgnl3[0], HIGH);
  digitalWrite(sgnl4[2], HIGH);
  digitalWrite(sgnl4[0], LOW);
  delay(rDelay);

  digitalWrite(sgnl4[1], HIGH);               // Making Green LED at signal 4 LOW and making yellow LED at signal 4 HIGH for 2 seconds
  digitalWrite(sgnl4[2], LOW);
  delay(yDelay);
  digitalWrite(sgnl4[1], LOW);
}
