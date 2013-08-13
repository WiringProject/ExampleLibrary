/*
|| @author         Brett Hagman <bhagman@wiring.org.co>
|| @url            http://wiring.org.co/
|| @contribution   Alexander Brevig <abrevig@wiring.org.co>
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

ExampleLibrary::ExampleLibrary(int value)
: increment(ExampleLibrary::incrementAssignSafteyGuard),  // Prepare our ConstrainedProperty 'increment'
  total(_total)                                           // Prepare our ConstantProperty 'total'
{
  increment = 1;
  increment = value;
}


/*
|| Public Methods
*/

void ExampleLibrary::doThatThing()
{
  _total += increment;

  Serial.println(_total, DEC);
}

void ExampleLibrary::reset()
{
  _total = 0;
}


/*
|| Private Methods
*/

bool ExampleLibrary::incrementAssignSafteyGuard(int value)
{
  // Accept any value except 0.
  return value != 0;
}

