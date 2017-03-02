#include <UTFT.h>
#include <URTouch.h>

// Initialize display
UTFT myGLCD(ILI9325C, 38, 39, 40, 41);

// Initialize touchscreen
// ----------------------
URTouch  myTouch( 6, 5, 4, 3, 2);

// Declare which fonts we will be using
extern uint8_t BigFont[];
extern uint8_t SevenSegmentFull[];
extern uint8_t Ubuntu[];
extern unsigned int humImg[1024];
extern unsigned int tempImg[1024];
extern unsigned int pressImg[1024];
extern unsigned int wifiImg[1024];

int x, y;

void setup()
{
  myGLCD.InitLCD();
  myGLCD.clrScr();

  myTouch.InitTouch();
  myTouch.setPrecision(PREC_MEDIUM);

  myGLCD.setFont(BigFont);
  myGLCD.setColor(220, 220, 220);
  myGLCD.drawRect (0, 0, 319, 239);

  myGLCD.drawBitmap (20, 10, 32, 32, wifiImg);
  myGLCD.print("smajltron", 80, 20);

  myGLCD.setColor(100, 100, 255);
  myGLCD.setFont(Ubuntu);
  myGLCD.drawBitmap (20, 70, 32, 32, tempImg);
  myGLCD.print("0.0 C", 80, 70);

  myGLCD.drawBitmap (20, 130, 32, 32, humImg);
  myGLCD.print("0.0 %", 80, 130);

  myGLCD.drawBitmap (20, 190, 32, 32, pressImg);
  myGLCD.print("0 kPa", 80, 190);
}

void loop()
{
  // put your main code here, to run repeatedly:

}
