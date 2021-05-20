#ifndef MENUELEMENT_HPP
#define MENUELEMENT_HPP

#include <gui_generated/containers/MenuElementBase.hpp>
#include <BitmapDatabase.hpp>
#include <math.h>

class MenuElement : public MenuElementBase
{
public:
    MenuElement();
    virtual ~MenuElement() {}

    virtual void initialize();

    virtual void offset(int16_t x)
    {
        icon.moveTo(30+x,icon.getY());
        text.moveTo(80+x,text.getY());
    }

    virtual void setY(int16_t y)
    {
          MenuElementBase::setY(y);

          const int circleRadius = 250;

          y = y+getHeight()/2 -390/2;

          float x_f = circleRadius - sqrtf((float)((circleRadius*circleRadius)-(y*y)));
          int16_t x = (int16_t)(x_f+0.5f);
          offset(x);
    }

    virtual void setNumber(int no)
    {
        Unicode::itoa(no, textBuffer,TEXT_SIZE,10);
        switch (no % 7)
        {
        case 0:
            icon.setBitmap(Bitmap(BITMAP_ICON00_ID));
            break;
        case 1:
            icon.setBitmap(Bitmap(BITMAP_ICON01_ID));
            break;
        case 2:
            icon.setBitmap(Bitmap(BITMAP_ICON02_ID));
            break;
        case 3:
            icon.setBitmap(Bitmap(BITMAP_ICON03_ID));
            break;
        case 4:
            icon.setBitmap(Bitmap(BITMAP_ICON04_ID));
            break;
        case 5:
            icon.setBitmap(Bitmap(BITMAP_ICON05_ID));
            break;
        case 6:
            icon.setBitmap(Bitmap(BITMAP_ICON06_ID));
            break;  
        }
    }
protected:
};

#endif // MENUELEMENT_HPP
