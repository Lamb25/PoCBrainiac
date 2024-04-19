#include <gui/mainscreen_screen/MainScreenView.hpp>
#include <string>

MainScreenView::MainScreenView()
{
    tickCounter = 0;
}

void MainScreenView::setupScreen()
{
    MainScreenViewBase::setupScreen();
}

void MainScreenView::tearDownScreen()
{
    MainScreenViewBase::tearDownScreen();
}

void MainScreenView::handleTickEvent()
{
    setSpeedoValue();
    setTacoValue();
    setPRNDLValue();
    setOdometerValue();
}

void MainScreenView::setSpeedoValue()
{
    gauge_Speedo.updateValue(gauge_Speedo.getValue() + 1, 0); 
}

void MainScreenView::setTacoValue()
{
    gauge_Taco.updateValue(gauge_Taco.getValue() + 2, 0);
}

void MainScreenView::setPRNDLValue()
{
    Unicode::snprintf(txt_PRNDLBuffer, TXT_PRNDL_SIZE, "%s", "L");
    txt_PRNDL.setWildcard(txt_PRNDLBuffer);
    txt_PRNDL.resizeToCurrentText();
    txt_PRNDL.invalidate();
}

void MainScreenView::setOdometerValue()
{
    Unicode::snprintf(txt_OdometerBuffer, TXT_ODOMETER_SIZE, "%d", 654321);
    txt_Odometer.setWildcard(txt_OdometerBuffer);
    txt_Odometer.resizeToCurrentText();
    txt_Odometer.invalidate();
}