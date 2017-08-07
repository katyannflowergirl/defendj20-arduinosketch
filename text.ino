/*  draw text's APP
    drawChar(INT8U ascii,INT16U poX, INT16U poY,INT16U size, INT16U fgcolor);
    drawString(char *string,INT16U poX, INT16U poY,INT16U size,INT16U fgcolor);

    by Katy Ann --- GNU GENERAL PUBLIC LICENSE Version 3
    use with seeed tft v2 LCD screen
    (A) 
    Dump Trump!
*/

#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>

void setup()
{
    Tft.TFTinit();  // init TFT library
    
    Tft.drawString("#DefendJ20",0,17,3,GREEN);    
    Tft.drawString("Free Dane ",0,57,3,GREEN);  
    Tft.drawString("Powell",0,97,3,GREEN); 
    Tft.drawString("All Prisoners ",0,137,3,GREEN);   
    Tft.drawString("Are Political ",0,177,3,GREEN);
    Tft.drawString("Prisoners... ",0,217,3,GREEN);
    Tft.drawString("#DropJ20",0,257,3,GREEN); 
    
}

void loop()
{
  
}
