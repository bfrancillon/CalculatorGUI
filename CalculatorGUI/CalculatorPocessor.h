#pragma once
#include "wx/wx.h"
#include<string>
#include "Main.h"
class CalculatorPocessor
{
private:
	static CalculatorPocessor* processor;
	int numbers;
	CalculatorPocessor(){}

public:
	static CalculatorPocessor* GetInstance() {
		if (processor == nullptr)
		{
			processor = new CalculatorPocessor;
		}
		return processor;
	}

	CalculatorPocessor(CalculatorPocessor& other) = delete;
	void operator = (CalculatorPocessor& other) = delete;
	
	std::string GetText() {
		return " ";
	}
	void Numbers(int number);
	std::string ToBinaryString(int number);
	std::string ToHexidecimalString(int number);
	float ToOperatorString(wxTextCtrl* m_txt1, char number, char sym);
	int negative(int number);


};

