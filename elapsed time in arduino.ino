

float elapsedTime, currentTime, previousTime;
float Time_span = 0;
void setup()
{
Serial.begin(9600);
}


void loop() {
   previousTime = currentTime;        // Previous time is stored before the actual time read
  currentTime = millis();            // Current time actual time read
  elapsedTime = (currentTime - previousTime);
  Time_span += elapsedTime;

  Serial.println(elapsedTime);
    Serial.println(Time_span);

  }