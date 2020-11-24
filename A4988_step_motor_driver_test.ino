int x;

void setup()
{
  Serial.begin(9600);

  pinMode(6, OUTPUT); // Enable, signal to start/stop the motor driver, if low/high respectively
  pinMode(5, OUTPUT); // Step, drives the motor one step further, when going from low to high
  pinMode(4, OUTPUT); // Dir, defines the direction of the motor

  digitalWrite(6, LOW); // Set Enable low = start the motor driver
  digitalWrite(4, HIGH); // Set Dir high
}

void loop() {
  Serial.println("Loop 200 steps (1 rev)");
  for (x = 0; x < 200; x++) { // Loop 200 times = number of steps for one rotation
    digitalWrite(5, HIGH); // Output high
    delay(10); // Wait
    digitalWrite(5, LOW); // Output low
    delay(10); // Wait
  }
  Serial.println("Pause");
  delay(1000); // pause one second
}
