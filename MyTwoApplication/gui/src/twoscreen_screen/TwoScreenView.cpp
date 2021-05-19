#include <gui/twoscreen_screen/TwoScreenView.hpp>

TwoScreenView::TwoScreenView()
{

}

void TwoScreenView::setupScreen()
{
    TwoScreenViewBase::setupScreen();
    hour = presenter->getHour();
    minute = presenter->getMinute();

    Unicode::snprintf(textAreaClockBuffer1, TEXTAREACLOCKBUFFER1_SIZE, "%02d", hour);
    Unicode::snprintf(textAreaClockBuffer2, TEXTAREACLOCKBUFFER2_SIZE, "%02d", minute);
}

void TwoScreenView::tearDownScreen()
{
    presenter->saveHour(hour);
    presenter->saveMinute(minute);
    TwoScreenViewBase::tearDownScreen();
}

void TwoScreenView::handleTickEvent()
{
    if(tickCount == 60)
    {
        minute ++;
        hour = (hour+ ( minute / 60 )) % 24;
        minute %=60;
        Unicode::snprintf(textAreaClockBuffer1,TEXTAREACLOCKBUFFER1_SIZE,"%02d",hour);
        Unicode::snprintf(textAreaClockBuffer2,TEXTAREACLOCKBUFFER2_SIZE,"%02d",minute);
        textAreaClock.invalidate();
        tickCount = 0;

    }

    if(!textAreaClock.isMoveAnimationRunning())
    {
        tickCount ++;
        if(circle.getArcStart()+340 == circle.getArcEnd())
        {
            addStart = 2;
            addEnd = 1;

        }
        else if(circle.getArcStart() + 20 == circle.getArcEnd())
        {
          addStart = 2;
          addEnd = 1;
        }
        circle.invalidate();
        circle.setArc(circle.getArcStart()+addStart,circle.getArcEnd()+addEnd);
        circle.invalidate();

    }
        

}