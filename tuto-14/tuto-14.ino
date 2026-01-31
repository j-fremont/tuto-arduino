#include <Adafruit_Sensor.h>
#include <Adafruit_TSL2591.h>

Adafruit_TSL2591 tsl = Adafruit_TSL2591(2591); // pass in a number for the sensor identifier (for your use later)

void setup()  {

  Serial.begin(9600);   // Initialize serial communication with 9600 baud
 
  if (tsl.begin()) 
  {
    Serial.println(F("Found a TSL2591 sensor"));
  } 
  else 
  {
    Serial.println(F("Sensor Not Found ... check wiring!"));
    while (1);   // stay here!
  }
 
  // Configure the gain and integration time for the TSL2591
  tsl.setGain(TSL2591_GAIN_MED);                 // Set sensor gain to 25x
  tsl.setTiming(TSL2591_INTEGRATIONTIME_300MS);  // Set sensor integration time to 300 ms
}

void loop() {
  
  uint32_t tsl2591_data = tsl.getFullLuminosity();   // Get CH0 & CH1 data from the sensor (two 16-bit registers)
  
  uint16_t ir, ir_visible;
  ir = tsl2591_data >> 16;              // extract infrared value
  ir_visible = tsl2591_data & 0xFFFF;   // extract visible + infrared value
 
  float lux = tsl.calculateLux(ir_visible, ir);   // Calculate light lux value
 
  // Print light lux on serial monitor
  Serial.print(F("Light Level = "));
  Serial.print(lux, 6);
  Serial.println( " Lux" );
  
  delay(2000);   // wait two seconds
}
