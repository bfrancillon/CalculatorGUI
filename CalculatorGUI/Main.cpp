#include "Main.h"
#include "ButtonFactory.h"

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
	m_btn1 = ButtonFactory::m_btn1(this);
	m_btn2 = ButtonFactory::m_btn2(this);
	m_btn3 = ButtonFactory::m_btn3(this);
	m_btn4 = ButtonFactory::m_btn4(this);
	m_btn5 = ButtonFactory::m_btn5(this);


	m_btn6 = ButtonFactory::m_btn6(this);
	m_btn7 = ButtonFactory::m_btn7(this);
	m_btn8 = ButtonFactory::m_btn8(this);
	m_btn9 = ButtonFactory::m_btn9(this);

	m_btn10 = ButtonFactory::m_btn10(this);
	m_btn11 = ButtonFactory::m_btn11(this);
	m_btn12 = ButtonFactory::m_btn12(this);
	m_btn13 = ButtonFactory::m_btn13(this);

	m_btn14 = ButtonFactory::m_btn14(this);
	m_btn15 = ButtonFactory::m_btn15(this);
	m_btn16 = ButtonFactory::m_btn16(this);
	m_btn17 = ButtonFactory::m_btn17(this);

	m_btn17 = ButtonFactory::m_btn18(this);
	m_btn19 = ButtonFactory::m_btn19(this);
	m_btn20 = ButtonFactory::m_btn20(this);
	m_btn21 = ButtonFactory::m_btn21(this);

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

void Main::BindButton(wxButton* button)
{
	button->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
}
