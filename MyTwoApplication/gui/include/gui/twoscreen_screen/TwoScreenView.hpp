#ifndef TWOSCREENVIEW_HPP
#define TWOSCREENVIEW_HPP

#include <gui_generated/twoscreen_screen/TwoScreenViewBase.hpp>
#include <gui/twoscreen_screen/TwoScreenPresenter.hpp>

class TwoScreenView : public TwoScreenViewBase
{
public:
    TwoScreenView();
    virtual ~TwoScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
protected:
    int16_t hour;
    int16_t minute;
    int16_t tickCount;
    int16_t addStart;
    int16_t addEnd;
};

#endif // TWOSCREENVIEW_HPP
