/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef COLOREMITTERBASE_HPP
#define COLOREMITTERBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/Color.hpp>

class ColorEmitterBase : public touchgfx::Container
{
public:
    ColorEmitterBase();
    virtual ~ColorEmitterBase() {}
    virtual void initialize();

    /*
     * Custom Trigger Callback Setters
     */
    void setColorChangedCallback(touchgfx::GenericCallback<colortype>& callback)
    {
        this->colorChangedCallback = &callback;
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Custom Trigger Emitters
     */
    virtual void emitColorChangedCallback(colortype value)
    {
        if (colorChangedCallback && colorChangedCallback->isValid())
        {
            this->colorChangedCallback->execute(value);
        }
    }

    /*
     * Member Declarations
     */
    touchgfx::Button button1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ColorEmitterBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Custom Trigger Callback Declarations
     */
    touchgfx::GenericCallback<colortype>* colorChangedCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // COLOREMITTERBASE_HPP
