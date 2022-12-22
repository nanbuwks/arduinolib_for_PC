# library for to run arduino sketch on pc

## how to

put this library in sketch directry and add sketch:

```

#include "arduinolib_for_PC.hpp"

```

Support:


- Serial.print("...")  -> printf("...")
- Serial.println("...") -> printf("...\n")
- millis(num) SDL_GetTicks()
- String(num) to_string(num)
- delay(msec) SDL_Delay(msec)

## Depend

need SDL2 library for SDL_Delay ( delay )
