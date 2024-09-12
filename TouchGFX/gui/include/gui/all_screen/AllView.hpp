#ifndef ALLVIEW_HPP
#define ALLVIEW_HPP

#include <gui_generated/all_screen/AllViewBase.hpp>
#include <gui/all_screen/AllPresenter.hpp>

class AllView : public AllViewBase
{
public:
    AllView();
    virtual ~AllView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void UpdateGraph(uint16_t value);
    void UpdateGraph2(uint16_t value);
    void UpdateGraph3(uint16_t value);
    void UpdateGraph4(uint16_t value);
    void UpdateGraph5(uint16_t value);
    void UpdateGraph6(uint16_t value);

protected:
};

#endif // ALLVIEW_HPP
