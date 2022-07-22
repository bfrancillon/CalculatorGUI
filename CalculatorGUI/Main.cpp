#include "Main.h"
#include "ButtonFactory.h"
#include "CalculatorPocessor.h"
#include "wx/wx.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON(1001, Main::OnButtonClicked)
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
char sym;
float num1 = 0;
float num2 = 0;
bool solve = false;
float results = 0;
std::string result = " ";
char store = ' ';


CalculatorPocessor* processor = CalculatorPocessor::GetInstance();


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
	CalculatorPocessor* processor = CalculatorPocessor::GetInstance();

	int id = event.GetId();
	switch (id)
	{
	case 1001:
		m_txt1->AppendText("DEC");
		break;

	case 1002:
		m_txt1->AppendText("HEX");
		m_txt1->Clear();
		result = processor ->ToHexidecimalString(num1);
		m_txt1->AppendText(result);

		break;
	case 1003:
		m_txt1->AppendText("BIN");
		result = processor->ToHexidecimalString(num1);
		m_txt1->AppendText(result);
		break;
	case 1004:
		//m_txt1->AppendText("CE");
		m_txt1->Clear();
		num1 = 0;
		num2 = 0;
		sym = ' ';
			break;
	case 1005:
		solve = false;
		m_txt1->AppendText("+-");
		result = processor->negative(num1);

		sym = '+-';

		break;

	case 1006:
		m_txt1->AppendText("7");
		Solve();
		store += '7';
		if (sym == ' ')
		{
			num1 = (num1 * 10) + 7;
		}
		else
		{
			num2 = (num2 * 10) + 7;
		}
		break;

	case 1007:

		m_txt1->AppendText("8");
		Solve();
		store += '8';
		if (sym == ' ')
		{
			num1 = (num1 * 10) + 8;
		}
		else
		{
			num2 = (num2 * 10) + 8;
		}
		break;
	case 1008:
		m_txt1->AppendText("9");
		Solve();
		store += '9';
		if (sym == ' ')
		{
			num1 = (num1 * 10) + 9;
		}
		else
		{
			num2 = (num2 * 10) + 9;
		}
		break;
	case 1009:
		solve = false;
		m_txt1->AppendText("+");
		sym = '+';

		break;
	case 10010:
		m_txt1->AppendText("4");
		Solve();
		store += '4';
		if (sym == ' ')
		{
			num1 = (num1 * 10) + 4;
		}
		else
		{
			num2 = (num2 * 10) + 4;
		}
		break;

	case 10011:
		m_txt1->AppendText("5");
		Solve();
		store += '5';
		if (sym == ' ')
		{
			num1 = (num1 * 10) + 5;
		}
		else
		{
			num2 = (num2 * 10) + 5;
		}
		break;

	case 10012:
		m_txt1->AppendText("6");
		Solve();
		store += '6';
		if (sym == ' ')
		{
			num1 = (num1 * 10) + 6;
		}
		else
		{
			num2 = (num2 * 10) + 6;
		}
		break;
	case 10013:
		solve = false;
		m_txt1->AppendText("-");
		sym = '-';

		break;
	case 10014:
		m_txt1->AppendText("1");
		Solve();
		store += '1';
		if (sym == ' ')
		{
			num1 = (num1 * 10) + 1;
		}
		else
		{
			num2 = (num2 * 10) + 1;
		}
		break;
	case 10015:
		m_txt1->AppendText("2");
		Solve();
		store += '2';
		if (sym == ' ')
		{
			num1 = (num1 * 10) + 2;
		}
		else
		{
			num2 = (num2 * 10) + 2;
		}

		break;

	case 10016:
		m_txt1->AppendText("3");
		Solve();
		store += '3';
		if (sym == ' ')
		{
			num1 = (num1 * 10) + 3;
		}
		else
		{
			num2 = (num2 * 10) + 3;
		}
		break;

	case 10017:
		solve = false;
		m_txt1->AppendText("*");
		sym = '*';
		store = ' ';


		break;
	case 10018:
		m_txt1->AppendText("0");
		Solve();
		if (sym == ' ')
		{
			num1 = (num1 * 10) + 0;
		}
		else
		{
			num2 = (num2 * 10) + 0;
		}
		break;
	case 10019:
		solve = false;
		m_txt1->AppendText("%");
		sym = '%';

		store = ' ';

		break;
	case 10020:
		m_txt1->Clear();
		sym = processor->ToOperatorString(num1, num2, sym);
		m_txt1->AppendText(std::to_string(results));
		sym = '=';
		num1 = results;
		num2 = 0;
		solve = true;

		break;

	case 10021:
		solve = false;
		m_txt1->AppendText("/");
		sym = '/';
		store = ' ';
		break;

	}
	
	event.Skip();


}

void Main::BindButton(wxButton* button)
{
	button->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Main::OnButtonClicked, this);
}

void Main::Solve()
{
	if (solve ==true)
	{
		num1 = 0;
		m_txt1->Clear();
	}
	solve = false;
}
