/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/ColorEmitterBase.hpp>
#include "BitmapDatabase.hpp"

ColorEmitterBase::ColorEmitterBase() :
    buttonCallback(this, &ColorEmitterBase::buttonCallbackHandler),
    colorChangedCallback(0)
{
    setWidth(240);
    setHeight(110);
    button1.setXY(35, 43);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    button1.setAction(buttonCallback);

    add(button1);
}

void ColorEmitterBase::initialize()
{

}

void ColorEmitterBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &button1)
    {
        //Interaction1
        //When button1 clicked emit colorChanged callback
        //Emit callback
        emitColorChangedCallback(touchgfx::Color::getColorFrom24BitRGB(rand()%256,rand()%256,rand()%256));
    }
}
