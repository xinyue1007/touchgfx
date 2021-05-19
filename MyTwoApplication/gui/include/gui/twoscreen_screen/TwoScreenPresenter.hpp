#ifndef TWOSCREENPRESENTER_HPP
#define TWOSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class TwoScreenView;

class TwoScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    TwoScreenPresenter(TwoScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~TwoScreenPresenter() {};
    virtual void saveHour(int16_t hour)
    {
        model->saveHour(hour);
    }
    virtual void saveMinute(int16_t minute)
    {
        model->saveMinute(minute);
    }

    virtual int16_t getHour()
    {
        return model->getHour();
    }

    virtual int16_t getMinute()
    {
        return model->getMinute();
    }
private:
    TwoScreenPresenter();

    TwoScreenView& view;
};

#endif // TWOSCREENPRESENTER_HPP
