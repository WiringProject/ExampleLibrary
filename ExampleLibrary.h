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

#ifndef EXAMPLELIBRARY_H
#define EXAMPLELIBRARY_H

#if WIRING < 200
 #error This library requires Wiring Framework 2.0.0+
#endif

#include <Wiring.h>
// This is temporary, as WProperty.h will be included from Wiring.h
#include "WProperty.h"

/*
|| ExampleLibrary version
|| @Version 2.0.0
*/

// Version below is 2 00 00 (integer representation of above)
#define EXAMPLELIBRARY_VERSION          20000


/*
|| Class
*/

class ExampleLibrary
{
  public:
    // Constructor
    ExampleLibrary(int value = 1);

    // Methods
    void doThatThing();
    void reset();

    // Properties
    ConstrainedProperty<int> increment;
    ConstantProperty<int> total;

  private:
    // Methods
    static bool incrementAssignSafteyGuard(int value);

    // Members
    int _total;
};


#endif
