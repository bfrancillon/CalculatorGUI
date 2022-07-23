#include "pch.h"
#include "CppUnitTest.h"
#include "../CalculatorGUI/ButtonFactory.h"
#include "../CalculatorGUI/CalculatorPocessor.h"
#include "wx/wx.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(ButtonFactoryTests)
	{
	private:
		wxButton** butt = new wxButton *[21];
		

		wxFrame *frame= new wxFrame(nullptr, wxID_ANY, " BF Calculator", wxPoint(30, 30), wxSize(630, 450));

	public:

		TEST_METHOD(m_btn18IsZero)
		{
			ButtonFactory::m_btn18(*butt);
			Assert::IsTrue(butt[0]->GetLabel().ToStdString() == "0");
			Assert::IsTrue(butt[0]->GetId() == 10018);
		}
		TEST_METHOD(m_btn14IsOne)
		{
			ButtonFactory::m_btn14(*butt);
			Assert::IsTrue(butt[1]->GetLabel().ToStdString() == "1");
			Assert::IsTrue(butt[1]->GetId() == 10014);
		}
		TEST_METHOD(m_btn15IsTwo)
		{
			ButtonFactory::m_btn15(*butt);
			Assert::IsTrue(butt[2]->GetLabel().ToStdString() == "2");
			Assert::IsTrue(butt[2]->GetId() == 10015);
		}
		TEST_METHOD(m_btn16IsThree)
		{
			ButtonFactory::m_btn16(*butt);
			Assert::IsTrue(butt[3]->GetLabel().ToStdString() == "3");
			Assert::IsTrue(butt[3]->GetId() == 10016);
		}
		TEST_METHOD(m_btn10IsFour)
		{
			ButtonFactory::m_btn10(*butt);
			Assert::IsTrue(butt[4]->GetLabel().ToStdString() == "4");
			Assert::IsTrue(butt[4]->GetId() == 10010);
		}
		TEST_METHOD(m_btn11IsFive)
		{
			ButtonFactory::m_btn11(*butt);
			Assert::IsTrue(butt[5]->GetLabel().ToStdString() == "5");
			Assert::IsTrue(butt[5]->GetId() == 10011);
		}
		TEST_METHOD(m_btn12IsSix)
		{
			ButtonFactory::m_btn12(*butt);
			Assert::IsTrue(butt[6]->GetLabel().ToStdString() == "6");
			Assert::IsTrue(butt[6]->GetId() == 10012);
		}
		TEST_METHOD(m_btn6IsSeven)
		{
			ButtonFactory::m_btn6(*butt);
			Assert::IsTrue(butt[7]->GetLabel().ToStdString() == "7");
			Assert::IsTrue(butt[7]->GetId() == 1006);
		}
		TEST_METHOD(m_btn7IsEight)
		{
			ButtonFactory::m_btn7(*butt);
			Assert::IsTrue(butt[8]->GetLabel().ToStdString() == "8");
			Assert::IsTrue(butt[8]->GetId() == 1007);
		}
		TEST_METHOD(m_btn8IsNine)
		{
			ButtonFactory::m_btn8(*butt);
			Assert::IsTrue(butt[9]->GetLabel().ToStdString() == "9");
			Assert::IsTrue(butt[9]->GetId() == 1008);
		}
	};
	TEST_CLASS(CalculatorPocessorTests)
	{
	private:
		wxFrame* frame = new wxFrame(nullptr, wxID_ANY, " BF Calculator", wxPoint(30, 30), wxSize(630, 450));
		CalculatorPocessor* processor = CalculatorPocessor::GetInstance();
		wxTextCtrl* m_txt1 = new wxTextCtrl(frame, 9999, "0", wxDefaultPosition, wxDefaultSize, wxTE_RIGHT | wxTE_READONLY | wxTE_RICH);
	public:

		TEST_METHOD(Add)
		{
			*m_txt1 << 10 << "+" << 5;
			processor->ToOperatorString(m_txt1, 10, 10);
			std::string put = m_txt1->GetLineText(0).ToStdString();
			Assert::IsTrue(put == "15");
			m_txt1->Clear();
		}
		TEST_METHOD(subtract)
		{
			*m_txt1 << 10 << "-" << 5;
			processor->ToOperatorString(m_txt1, 10, 10);
			std::string put = m_txt1->GetLineText(0).ToStdString();
			Assert::IsTrue(put == "5");
			m_txt1->Clear();
		}
		TEST_METHOD(Negative)
		{
			*m_txt1 << "+-" << 5;
			processor->ToOperatorString(m_txt1, 10, 10);
			std::string put = m_txt1->GetLineText(0).ToStdString();
			Assert::IsTrue(put == "-5");
			m_txt1->Clear();
		}
		TEST_METHOD(Multiply)
		{
			*m_txt1 << 2 << "*" << 5;
			processor->ToOperatorString(m_txt1, 10, 10);
			std::string put = m_txt1->GetLineText(0).ToStdString();
			Assert::IsTrue(put == "10");
			m_txt1->Clear();
		}
		TEST_METHOD(Divide)
		{
			*m_txt1 << 10 << "/" << 5;
			processor->ToOperatorString(m_txt1, 10, 10);
			std::string put = m_txt1->GetLineText(0).ToStdString();
			Assert::IsTrue(put == "2");
			m_txt1->Clear();
		}
		TEST_METHOD(Mod)
		{
			*m_txt1 << 10 << "%" << 5;
			processor->ToOperatorString(m_txt1, 10, 10);
			std::string put = m_txt1->GetLineText(0).ToStdString();
			Assert::IsTrue(put == "0");
			m_txt1->Clear();
		}
		TEST_METHOD(Bin)
		{
			*m_txt1 << 10 << "+" << 5;
			processor->ToBinaryString( 10);
			std::string put = m_txt1->GetLineText(0).ToStdString();
			Assert::IsTrue(put == "1111");
			m_txt1->Clear();
		}
		TEST_METHOD(Hex)
		{
			*m_txt1 << 10 << "+" << 5;
			processor->ToHexidecimalString( 10);
			std::string put = m_txt1->GetLineText(0).ToStdString();
			Assert::IsTrue(put == "F");
			m_txt1->Clear();
		}
	}; 
}
