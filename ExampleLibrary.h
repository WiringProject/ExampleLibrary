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

#ifndef EXAMPLELIBRARY_H
#define EXAMPLELIBRARY_H

#include <Wiring.h>

/*
|| ExampleLibrary version
|| @Version 1.0.0
*/

// Version below is 1 00 00 (integer representation of above)
#define EXAMPLELIBRARY_VERSION          10000


/*
|| Public Constants
*/

static const int FORWARD = 1;
static const int BACKWARD = -1


/*
|| Class
*/

class ExampleLibrary
{
  public:
    // Constructor
    ExampleLibrary(int direction);

    // Methods
    void doThatThing();

  private:
    // Methods
    void setIncrement(int value);

    // Members
    int increment;
    int total;
};


#endif
