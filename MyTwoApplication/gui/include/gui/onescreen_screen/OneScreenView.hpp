#ifndef ONESCREENVIEW_HPP
#define ONESCREENVIEW_HPP

#include <gui_generated/onescreen_screen/OneScreenViewBase.hpp>
#include <gui/onescreen_screen/OneScreenPresenter.hpp>

class OneScreenView : public OneScreenViewBase
{
public:
    OneScreenView();
    virtual ~OneScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void buttonHourUpClicked();
    virtual void buttonHourDownClicked();
    virtual void buttonMinuteUpClicked();
    virtual void buttonMinuteDownClicked();
    virtual void buttonSaveHourClicked()
    {
        presenter->saveHour(hour);
    }

    virtual void buttonSaveMinuteClicked()
    {
        presenter->saveMinute(minute);
    }
protected:
    int16_t hour;
    int16_t minute;
};

#endif // ONESCREENVIEW_HPP
