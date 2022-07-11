#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON(1001,Main::OnButtonClicked)
EVT_BUTTON(1002, Main::OnButtonClicked)
EVT_BUTTON(1003, Main::OnButtonClicked)
EVT_BUTTON(1004, Main::OnButtonClicked)
EVT_BUTTON(1005, Main::OnButtonClicked)
EVT_BUTTON(1006, Main::OnButtonClicked)
EVT_BUTTON(1007, Main::OnButtonClicked)
EVT_BUTTON(1008, Main::OnButtonClicked)
EVT_BUTTON(1009, Main::OnButtonClicked)
EVT_BUTTON(10010, Main::OnButtonClicked)
EVT_BUTTON(10011, Main::OnButtonClicked)
EVT_BUTTON(10012, Main::OnButtonClicked)
EVT_BUTTON(10013, Main::OnButtonClicked)
EVT_BUTTON(10014, Main::OnButtonClicked)
EVT_BUTTON(10015, Main::OnButtonClicked)
EVT_BUTTON(10016, Main::OnButtonClicked)
EVT_BUTTON(10017, Main::OnButtonClicked)
EVT_BUTTON(10018, Main::OnButtonClicked)
EVT_BUTTON(10019, Main::OnButtonClicked)
EVT_BUTTON(10020, Main::OnButtonClicked)
EVT_BUTTON(10021, Main::OnButtonClicked)


wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY," BF Calculator", wxPoint(30, 30), wxSize(630, 450))
{
	m_txt1 = new wxTextCtrl(this, wxID_ANY, " ", wxPoint(10, 10), wxSize(620, 70));
	m_btn1 = new wxButton(this, 1001, "DEC", wxPoint(10, 90), wxSize(120, 50));
	m_btn2 = new wxButton(this, 1002, "HEX", wxPoint(130, 90), wxSize(120, 50));
	m_btn3 = new wxButton(this, 1003, "BIN", wxPoint(250, 90), wxSize(120, 50));
	m_btn4 = new wxButton(this, 1004, "CE", wxPoint(370, 90), wxSize(120, 50));
	m_btn5 = new wxButton(this, 1005, "+-", wxPoint(490, 90), wxSize(120, 50));


	m_btn6 = new wxButton(this, 1006, "7", wxPoint(10, 150), wxSize(150, 60));
	m_btn7 = new wxButton(this, 1007, "8", wxPoint(160, 150), wxSize(150, 60));
	m_btn8 = new wxButton(this, 1008, "9", wxPoint(310, 150), wxSize(150, 60));
	m_btn9 = new wxButton(this, 1009, "+", wxPoint(460, 150), wxSize(150, 60));

	m_btn10 = new wxButton(this, 10010, "4", wxPoint(10, 216), wxSize(150, 60));
	m_btn11 = new wxButton(this, 10011, "5", wxPoint(160, 216), wxSize(150, 60));
	m_btn12 = new wxButton(this, 10012, "6", wxPoint(310, 216), wxSize(150, 60));
	m_btn13 = new wxButton(this, 10013, "-", wxPoint(460, 216), wxSize(150, 60));

	m_btn14 = new wxButton(this, 10014, "1", wxPoint(10, 283), wxSize(150, 60));
	m_btn15 = new wxButton(this, 10015, "2", wxPoint(160, 283), wxSize(150, 60));
	m_btn16 = new wxButton(this, 10016, "3", wxPoint(310, 283), wxSize(150, 60));
	m_btn17 = new wxButton(this, 10017, "*", wxPoint(460, 283), wxSize(150, 60));

	m_btn18 = new wxButton(this, 10018, "0", wxPoint(10, 350), wxSize(150, 60));
	m_btn19 = new wxButton(this, 10019, "%", wxPoint(160, 350), wxSize(150, 60));
	m_btn20 = new wxButton(this, 10020, "=", wxPoint(310, 350), wxSize(150, 60));
	m_btn21 = new wxButton(this, 10021, "/", wxPoint(460, 350), wxSize(150, 60));


}

Main::~Main()
{
}

void Main::OnButtonClicked(wxCommandEvent& event)
{
	int id = event.GetId();
	switch (id)
	{
	case 1001:
		m_txt1->AppendText("DEC");
		break;

	case 1002:
		m_txt1->AppendText("HEX");
		break;
	case 1003:
		m_txt1->AppendText("BIN");
		break;
	case 1004:
		//m_txt1->AppendText("CE");
		m_txt1->Clear();
			break;
	case 1005:
		m_txt1->AppendText("+-");
		break;

	case 1006:
		m_txt1->AppendText("7");
		break;

	case 1007:
		m_txt1->AppendText("8");
		break;
	case 1008:
		m_txt1->AppendText("9");
		break;
	case 1009:
		m_txt1->AppendText("+");
		break;
	case 10010:
		m_txt1->AppendText("4");
		break;

	case 10011:
		m_txt1->AppendText("5");
		break;

	case 10012:
		m_txt1->AppendText("6");
		break;
	case 10013:
		m_txt1->AppendText("-");
		break;
	case 10014:
		m_txt1->AppendText("1");
		break;
	case 10015:
		m_txt1->AppendText("2");
		break;

	case 10016:
		m_txt1->AppendText("3");
		break;

	case 10017:
		m_txt1->AppendText("*");
		break;
	case 10018:
		m_txt1->AppendText("0");
		break;
	case 10019:
		m_txt1->AppendText("%");
		break;
	case 10020:
		m_txt1->AppendText("=");
		break;

	case 10021:
		m_txt1->AppendText("/");
		break;
	
	}
	event.Skip();


}