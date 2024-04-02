#include <gui/mainscreen_screen/MainScreenView.hpp>
#include <string>

MainScreenView::MainScreenView()
{

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
}

void MainScreenView::setSpeedoValue()
{
    int max = 0;
    int min = 0;
    int nextValue = 0;
    int currentValue = crcProg_Speedometer.getValue();

    crcProg_Speedometer.getRange(min, max);
    
    if (currentValue == min)
    {
        increase = true;
    }

    else if (currentValue == max)
    {
        increase = false;
    }


    if (increase)
    {
        nextValue = currentValue + 1;
    }

    else
    {
        nextValue = currentValue - 1;
    }

    crcProg_Speedometer.setValue(nextValue);
    crcProg_Speedometer.invalidate();
}

void MainScreenView::setTacoValue()
{
    int max = 0;
    int min = 0;
    int nextValue = 0;
    int currentValue = crcProg_Tacometer.getValue();

    crcProg_Tacometer.getRange(min, max);

    if (currentValue == min)
    {
        increase = true;
    }

    else if (currentValue == max)
    {
        increase = false;
    }


    if (increase)
    {
        nextValue = currentValue + 1;
    }

    else
    {
        nextValue = currentValue - 1;
    }

    crcProg_Tacometer.setValue(nextValue);
    crcProg_Tacometer.invalidate();
}

void MainScreenView::setPRNDLValue()
{
    Unicode::snprintf(txt_PRNDLBuffer, TXT_PRNDL_SIZE, "%s", "L");
    txt_PRNDL.setWildcard(txt_PRNDLBuffer);
    txt_PRNDL.resizeToCurrentText();
    txt_PRNDL.invalidate();
}