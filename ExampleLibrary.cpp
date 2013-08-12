/* $Id$
/*
|| @author         Brett Hagman <bhagman@wiring.org.co>
|| @url            http://wiring.org.co/
||
|| @description
|| | Example Wiring Library
|| |
|| | This is a complete example of a Wiring Library
|| #
||
|| @license Please see the accompanying LICENSE file for this project.
||
*/

#include <Wiring.h>
#include "ExampleLibrary.h"

/*
|| Constructor
*/

ExampleLibrary::ExampleLibrary(int direction)
: total(0)
{
  setIncrement(direction);
}


/*
|| Public Methods
*/

void ExampleLibrary::doThatThing()
{
  total += increment;

  Serial.println(total, DEC);
}


/*
|| Private Methods
*/

void ExampleLibrary::setIncrement(int value)
{
  increment = value;
}

