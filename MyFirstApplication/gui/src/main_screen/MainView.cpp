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
	counter++;
	Unicode::snprintf(textCounterBuffer,TEXTCOUNTER_SIZE,"%d",counter);
	textCounter.invalidate();
	touchgfx_printf("buttonUpClicked \n");
}

void MainView::buttonDownClicked()
{
	counter--;
	if(counter < 0){
		Unicode::snprintf(textCounterBuffer,TEXTCOUNTER_SIZE,"%d",counter);
	}else{
	    Unicode::snprintf(textCounterBuffer,TEXTCOUNTER_SIZE,"%d",counter);
	}

	textCounter.invalidate();
	touchgfx_printf("buttonDownClicked \n");
}
