#include "Main.h"

Main::Main() : wxFrame(nullptr, wxID_ANY," BF Calculator", wxPoint(30, 30), wxSize(630, 450))
{
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(10, 10), wxSize(620, 70));
	m_btn1 = new wxButton(this, 10001, "DEC", wxPoint(10, 90), wxSize(120, 50));
	m_btn2 = new wxButton(this, 10001, "HEX", wxPoint(130, 90), wxSize(120, 50));
	m_btn3 = new wxButton(this, 10001, "BIN", wxPoint(250, 90), wxSize(120, 50));
	m_btn4 = new wxButton(this, 10001, "CE", wxPoint(370, 90), wxSize(120, 50));
	m_btn5 = new wxButton(this, 10001, "+-", wxPoint(490, 90), wxSize(120, 50));


	m_btn6 = new wxButton(this, 10001, "7", wxPoint(10, 150), wxSize(150, 60));
	m_btn7 = new wxButton(this, 10001, "8", wxPoint(160, 150), wxSize(150, 60));
	m_btn8 = new wxButton(this, 10001, "9", wxPoint(310, 150), wxSize(150, 60));
	m_btn9 = new wxButton(this, 10001, "+", wxPoint(460, 150), wxSize(150, 60));

	m_btn10 = new wxButton(this, 10001, "4", wxPoint(10, 216), wxSize(150, 60));
	m_btn11 = new wxButton(this, 10001, "5", wxPoint(160, 216), wxSize(150, 60));
	m_btn12 = new wxButton(this, 10001, "6", wxPoint(310, 216), wxSize(150, 60));
	m_btn13 = new wxButton(this, 10001, "-", wxPoint(460, 216), wxSize(150, 60));

	m_btn14 = new wxButton(this, 10001, "1", wxPoint(10, 283), wxSize(150, 60));
	m_btn15 = new wxButton(this, 10001, "2", wxPoint(160, 283), wxSize(150, 60));
	m_btn16 = new wxButton(this, 10001, "3", wxPoint(310, 283), wxSize(150, 60));
	m_btn17 = new wxButton(this, 10001, "*", wxPoint(460, 283), wxSize(150, 60));

	m_btn18 = new wxButton(this, 10001, "0", wxPoint(10, 350), wxSize(150, 60));
	m_btn19 = new wxButton(this, 10001, "%", wxPoint(160, 350), wxSize(150, 60));
	m_btn20 = new wxButton(this, 10001, "=", wxPoint(310, 350), wxSize(150, 60));
	m_btn21 = new wxButton(this, 10001, "/", wxPoint(460, 350), wxSize(150, 60));


}

Main::~Main()
{
}
