#define millis(num) SDL_GetTicks()
#define String(num) to_string(num)
#define delay(msec) SDL_Delay(msec)
#include <stdint.h>
#include <stdlib.h>
#include <string>
using namespace std;
class SerialDummy
{
  public:
    void begin(int speed){
    }
    void print(string contents){
            printf("%s",contents.c_str());
    }
    void print(int contents){
            printf("%d",contents);
    }
    void println(void){
            printf("\n");
    }
    void println(int contents){
            printf("%d\n",contents);
    }
    void println(string contents){
            printf("%s\n",contents.c_str());
    }
};
SerialDummy Serial;
