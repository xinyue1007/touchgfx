#ifndef ONESCREENPRESENTER_HPP
#define ONESCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class OneScreenView;

class OneScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    OneScreenPresenter(OneScreenView& v);

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

    virtual ~OneScreenPresenter() {};
    
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
    OneScreenPresenter();

    OneScreenView& view;
};

#endif // ONESCREENPRESENTER_HPP
