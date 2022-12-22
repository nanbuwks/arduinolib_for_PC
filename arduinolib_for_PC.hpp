#ifdef LGFX_USE_V1
#ifdef  __GNUC__
#include <lgfx/Fonts/IPA/lgfx_font_japan.h>
#include <lgfx/Fonts/efont/lgfx_efont_cn.h>
#include <lgfx/Fonts/efont/lgfx_efont_ja.h>
#include <lgfx/Fonts/efont/lgfx_efont_kr.h>
#include <lgfx/Fonts/efont/lgfx_efont_tw.h>
#include <lgfx/Fonts/IPA/lgfx_font_japan.c>
#include <lgfx/Fonts/efont/lgfx_efont_cn.c>
#include <lgfx/Fonts/efont/lgfx_efont_ja.c>
#include <lgfx/Fonts/efont/lgfx_efont_kr.c>
#include <lgfx/Fonts/efont/lgfx_efont_tw.c>
#endif
#endif


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
#ifndef LGFX_USE_V1
#include <SDL2/SDL.h>
#define setup() int setup()
#define loop() int loop()
int setup();
int loop();
int main();
main(){
int dummy;
   setup();
   while(1){
     loop();
   }
}
#endif
