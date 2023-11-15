int sensor_pin = A0;

void setup()
{
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Set the sensor pin as INPUT
  pinMode(sensor_pin, INPUT);
}

void loop()
{
  // Read the analog value from the soil moisture sensor
  int sensor_data = analogRead(sensor_pin);

  // Print the sensor data to the Serial Monitor
  Serial.print("Sensor_data:");
  Serial.print(sensor_data);
  Serial.print("\t | ");

  // Determine the moisture level based on the sensor reading
  if (sensor_data > 950)
  {
    Serial.println("No moisture, Soil is dry");
  }
  else if (sensor_data >= 400 && sensor_data <= 950)
  {
    Serial.println("There is some moisture, Soil is medium");
  }
  else if (sensor_data < 400)
  {
    Serial.println("Soil is wet");
  }

  // Delay for stability and readability in the Serial Monitor
  delay(100);
}

