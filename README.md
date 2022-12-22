# library for to run arduino sketch on pc

If you want to run Arduino sketch on the PC. How?

The Arduino sketch is a simplified C++ program, which differs from the main-style PC program. However, it uses the same language specification.
This is so that the Arduino sketch can run on the PC with as few changes as possible. 

For example, the Arduino sketch does not have a main, but instead has setup and loop. This library provides the missing main and calls setup and loop from main.

However, there are no GPIO pins on the PC, so the all-important digitalWrite and digitalRead do not work. We support something simpler.
However, if you use it with LovyanGFX for PC, you can enjoy powerful screen display on your PC. Use it for screen design and debugging!


## how to

put this library in sketch directry and add sketch:

```

#include "arduinolib_for_PC.hpp"

```

if you use LovyanGFX too, as below:

```
#define LGFX_USE_V1
#include "arduinolib_for_PC.hpp"

```




# Support:


- Serial.print("...")  -> printf("...")
- Serial.println("...") -> printf("...\n")
- millis(num) SDL_GetTicks()
- String(num) to_string(num)
- delay(msec) SDL_Delay(msec)

## Depend

need SDL2 library for SDL_Delay ( delay )
