/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINSCREENVIEWBASE_HPP
#define MAINSCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/mainscreen_screen/MainScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/scrollers/ScrollWheel.hpp>
#include <gui/containers/MenuElement.hpp>

class MainScreenViewBase : public touchgfx::View<MainScreenPresenter>
{
public:
    MainScreenViewBase();
    virtual ~MainScreenViewBase() {}
    virtual void setupScreen();

    virtual void scrollWheel1UpdateItem(MenuElement& item, int16_t itemIndex)
    {
        // Override and implement this function in MainScreen
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::Image background;
    touchgfx::ScrollWheel scrollWheel1;
    touchgfx::DrawableListItems<MenuElement, 7> scrollWheel1ListItems;
    touchgfx::Image overlay;

private:
    touchgfx::Callback<MainScreenViewBase, touchgfx::DrawableListItemsInterface*, int16_t, int16_t> updateItemCallback;
    void updateItemCallbackHandler(touchgfx::DrawableListItemsInterface* items, int16_t containerIndex, int16_t itemIndex);

};

#endif // MAINSCREENVIEWBASE_HPP
