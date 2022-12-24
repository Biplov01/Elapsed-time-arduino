

float elapsedTime, currentTime, previousTime;
float Time_span = 0;
void setup()
{
  previousTime = currentTime;        // Previous time is stored before the actual time read
  currentTime = millis(); 
    elapsedTime = (currentTime - previousTime);

Serial.begin(9600);
}


void loop() {
              // Current time actual time read
  Time_span += elapsedTime;

  Serial.println(elapsedTime);
  Serial.println(Time_span);
  }