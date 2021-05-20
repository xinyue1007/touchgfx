/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <stdlib.h>


Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler),
    colorEmitter1ColorChangedCallback(this, &Screen1ViewBase::colorEmitter1ColorChangedCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    background.setPosition(0, 0, 480, 272);
    background.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    button.setXY(155, 179);
    button.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    button.setAction(buttonCallback);

    colorEmitter1.setXY(0, 0);
    colorEmitter1.setColorChangedCallback(colorEmitter1ColorChangedCallback);

    add(__background);
    add(background);
    add(button);
    add(colorEmitter1);
}

void Screen1ViewBase::setupScreen()
{
    colorEmitter1.initialize();
}

void Screen1ViewBase::colorEmitter1ColorChangedCallbackHandler(colortype value)
{
    //Interaction3
    //When colorEmitter1 colorChanged call setBackgroundColor on Screen1
    //Call setBackgroundColor
    setBackgroundColor(value);
}

void Screen1ViewBase::setBackgroundColor(colortype value)
{
    //Interaction1
    //When setBackgroundColor is called execute C++ code
    //Execute C++ code
    background.setColor(value);
    background.invalidate();
}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &button)
    {
        //Interaction2
        //When button clicked call setBackgroundColor on Screen1
        //Call setBackgroundColor
        setBackgroundColor(touchgfx::Color::getColorFrom24BitRGB(rand()%256,rand()%256,rand()%256));
    }
}
