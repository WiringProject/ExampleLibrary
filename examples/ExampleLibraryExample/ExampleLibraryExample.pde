/*
|| @author         Brett Hagman <bhagman@wiring.org.co>
|| @url            http://wiring.org.co/
||
|| @description
|| | An Example for the Example Wiring Library
|| |
|| | This is an example sketch using the ExampleLibrary Wiring Library
|| #
||
|| @license Please see the accompanying LICENSE file for this project.
||
*/

#include <ExampleLibrary.h>

ExampleLibrary widget = ExampleLibrary(FORWARD);


void setup()
{
  Serial.begin(9600);

  Serial.println(Constant("ExampleLibrary Demonstration"));
}


void loop()
{
  widget.doThatThing();

  delay(500);
}
