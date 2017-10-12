// This #include statement was automatically added by the Particle IDE.
#include <blynk.h>


// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "5487a1b9f1f34f2ab1d5872ec64e35f6";


void setup()
{
  // Debug console
  Serial.begin(9600);

  delay(5000); // Allow board to settle
  Blynk.begin(auth);
  pinMode(D4, INPUT);
  pinMode(D0, OUTPUT);
}

void loop()
{
    int onoff = digitalRead(D4);
  Blynk.run();
  if (onoff)
  {
      digitalWrite(D0, HIGH);
  }
  else
  {
      digitalWrite(D0, LOW);
  }

}
