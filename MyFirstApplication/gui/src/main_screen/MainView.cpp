#include <gui/main_screen/MainView.hpp>

MainView::MainView()
{

}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();
}

void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}

void MainView::buttonUpClicked()
{
	touchgfx_printf("buttonUpClicked \n");
}

void MainView::buttonDownClicked()
{
	touchgfx_printf("buttonDownClicked \n");
}
