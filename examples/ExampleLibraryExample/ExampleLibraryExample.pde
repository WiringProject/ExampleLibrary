/*
|| @author         Brett Hagman <bhagman@wiring.org.co>
|| @url            http://wiring.org.co/
|| @contribution   Alexander Brevig <abrevig@wiring.org.co>
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

ExampleLibrary widget = ExampleLibrary();


void setup()
{
  Serial.begin(9600);

  Serial.println(Constant("ExampleLibrary Demonstration"));
}


void loop()
{
  widget.doThatThing();

  if (widget.total <= 0)
    widget.increment = 1;
  if (widget.total >= 10)
    widget.increment = -1;

  delay(500);
}
