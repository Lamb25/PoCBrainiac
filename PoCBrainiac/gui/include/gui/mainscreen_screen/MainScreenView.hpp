#ifndef MAINSCREENVIEW_HPP
#define MAINSCREENVIEW_HPP

#include <gui_generated/mainscreen_screen/MainScreenViewBase.hpp>
#include <gui/mainscreen_screen/MainScreenPresenter.hpp>

class MainScreenView : public MainScreenViewBase
{
public:
    MainScreenView();
    virtual ~MainScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();

private:
    void setSpeedoValue();
    void setTacoValue();
    void setPRNDLValue();
    void setOdometerValue();

    int tickCounter = 0;

protected:
    bool increase = true;
};

#endif // MAINSCREENVIEW_HPP
