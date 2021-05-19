#include <gui/onescreen_screen/OneScreenView.hpp>

OneScreenView::OneScreenView()
{

}

void OneScreenView::setupScreen()
{
    OneScreenViewBase::setupScreen();

    hour = presenter->getHour();
    minute = presenter->getMinute();
    touchgfx_printf("<%s:%d>  hour = %d minute = %d \n",__func__,__LINE__,hour,minute);
    Unicode::snprintf(textAreaHourBuffer, TEXTAREAHOUR_SIZE, "%02d", hour);
    Unicode::snprintf(textAreaMinuteBuffer, TEXTAREAMINUTE_SIZE, "%02d", minute);
}

void OneScreenView::tearDownScreen()
{
    OneScreenViewBase::tearDownScreen();
}

void OneScreenView::buttonHourUpClicked()
{
    hour = (hour + 1 ) % 24;
    Unicode::snprintf(textAreaHourBuffer,TEXTAREAHOUR_SIZE,"%02d",hour);
    textAreaHour.invalidate();


}
void OneScreenView::buttonHourDownClicked()
{
    hour = (hour + 24 -1 ) % 24;
    Unicode::snprintf(textAreaHourBuffer,TEXTAREAHOUR_SIZE,"%02d",hour);
    textAreaHour.invalidate();
}
void OneScreenView::buttonMinuteUpClicked()
{
    minute = (minute + 1 ) % 60;
    Unicode::snprintf(textAreaMinuteBuffer,TEXTAREAMINUTE_SIZE,"%02d",minute);
    textAreaMinute.invalidate(); 
}
void OneScreenView::buttonMinuteDownClicked()
{
    minute = (minute + 60 - 1 ) % 60;
    Unicode::snprintf(textAreaMinuteBuffer,TEXTAREAMINUTE_SIZE,"%02d",minute);
    textAreaMinute.invalidate();    
}