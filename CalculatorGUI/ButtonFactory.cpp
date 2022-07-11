#include "ButtonFactory.h"

wxButton* ButtonFactory::m_btn1(wxWindow* win)
{
    return new wxButton(win, 1001, "DEC", wxPoint(10, 90), wxSize(120, 50));;
}

wxButton* ButtonFactory::m_btn2(wxWindow* win)
{
    return new wxButton(win, 1002, "HEX", wxPoint(130, 90), wxSize(120, 50));;
}

wxButton* ButtonFactory::m_btn3(wxWindow* win)
{
    return new wxButton(win, 1003, "BIN", wxPoint(250, 90), wxSize(120, 50));;;
}

wxButton* ButtonFactory::m_btn4(wxWindow* win)
{
    return new wxButton(win, 1004, "CE", wxPoint(370, 90), wxSize(120, 50));;;
}

wxButton* ButtonFactory::m_btn5(wxWindow* win)
{
    return new wxButton(win, 1005, "+-", wxPoint(490, 90), wxSize(120, 50));;;
}

wxButton* ButtonFactory::m_btn6(wxWindow* win)
{
    return new wxButton(win, 1006, "7", wxPoint(10, 150), wxSize(150, 60));;;
}

wxButton* ButtonFactory::m_btn7(wxWindow* win)
{
    return new wxButton(win, 1007, "8", wxPoint(160, 150), wxSize(150, 60));;;
}

wxButton* ButtonFactory::m_btn8(wxWindow* win)
{
    return new wxButton(win, 1008, "9", wxPoint(310, 150), wxSize(150, 60));;;
}

wxButton* ButtonFactory::m_btn9(wxWindow* win)
{
    return new wxButton(win, 1009, "+", wxPoint(460, 150), wxSize(150, 60));;;
}

wxButton* ButtonFactory::m_btn10(wxWindow* win)
{
    return new wxButton(win, 10010, "4", wxPoint(10, 216), wxSize(150, 60));;;
}

wxButton* ButtonFactory::m_btn11(wxWindow* win)
{
    return new wxButton(win, 10011, "5", wxPoint(160, 216), wxSize(150, 60));;;
}

wxButton* ButtonFactory::m_btn12(wxWindow* win)
{
    return new wxButton(win, 10012, "6", wxPoint(310, 216), wxSize(150, 60));;;
}

wxButton* ButtonFactory::m_btn13(wxWindow* win)
{
    return new wxButton(win, 10013, "-", wxPoint(460, 216), wxSize(150, 60));;;
}

wxButton* ButtonFactory::m_btn14(wxWindow* win)
{
    return new wxButton(win, 10014, "1", wxPoint(10, 283), wxSize(150, 60));;;
}

wxButton* ButtonFactory::m_btn15(wxWindow* win)
{
    return new wxButton(win, 10015, "2", wxPoint(160, 283), wxSize(150, 60));;;
}

wxButton* ButtonFactory::m_btn16(wxWindow* win)
{
    return new wxButton(win, 10016, "3", wxPoint(310, 283), wxSize(150, 60));;;
}

wxButton* ButtonFactory::m_btn17(wxWindow* win)
{
    return new wxButton(win, 10017, "*", wxPoint(460, 283), wxSize(150, 60));;;
}

wxButton* ButtonFactory::m_btn18(wxWindow* win)
{
    return new wxButton(win, 10018, "0", wxPoint(10, 350), wxSize(150, 60));;;
}

wxButton* ButtonFactory::m_btn19(wxWindow* win)
{
    return new wxButton(win, 10019, "%", wxPoint(160, 350), wxSize(150, 60));;;
}

wxButton* ButtonFactory::m_btn20(wxWindow* win)
{
    return new wxButton(win, 10020, "=", wxPoint(310, 350), wxSize(150, 60));;;
}

wxButton* ButtonFactory::m_btn21(wxWindow* win)
{
    return new wxButton(win, 10021, "/", wxPoint(460, 350), wxSize(150, 60));;;
}
