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
#include <touchgfx/containers/progress_indicators/CircleProgress.hpp>
#include <touchgfx/widgets/canvas/PainterRGB888.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class MainScreenViewBase : public touchgfx::View<MainScreenPresenter>
{
public:
    MainScreenViewBase();
    virtual ~MainScreenViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image backGround;
    touchgfx::CircleProgress crcProg_Tacometer;
    touchgfx::PainterRGB888 crcProg_TacometerPainter;
    touchgfx::CircleProgress crcProg_Speedometer;
    touchgfx::PainterRGB888 crcProg_SpeedometerPainter;
    touchgfx::TextAreaWithOneWildcard txt_PRNDL;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TXT_PRNDL_SIZE = 2;
    touchgfx::Unicode::UnicodeChar txt_PRNDLBuffer[TXT_PRNDL_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 5700;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

};

#endif // MAINSCREENVIEWBASE_HPP
