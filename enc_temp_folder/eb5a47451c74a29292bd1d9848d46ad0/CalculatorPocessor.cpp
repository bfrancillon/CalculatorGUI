#include "CalculatorPocessor.h"
#include "wx/wx.h"


CalculatorPocessor* CalculatorPocessor::processor = nullptr;
void CalculatorPocessor::Numbers(int number)
{
	numbers = number;
}
std::string CalculatorPocessor::ToBinaryString(int number)
{
	std::string results = "";
	//results = std::to_string(number % 2) + results;
	for (int i = 0; i < 16; i++)
	{

		if (number % 2 == 0) {
			results = "0" + results;
		}
		else {
			results = "1" + results;
		}

		number = number / 2;
	}
	return results;
}

std::string CalculatorPocessor::ToHexidecimalString(int number)
{
	std::string results = "";
	while (number > 0)
	{
		int remainder = number % 16;
		if (remainder < 10) {
			results = std::to_string(remainder) + results;
		}
		else if (remainder == 10) {
			results = "A" + remainder;
		}
		else if (remainder == 11) {
			results = "B" + remainder;
		}
		else if (remainder == 12) {
			results = "C" + remainder;
		}
		else if (remainder == 13) {
			results = "D" + remainder;
		}
		else if (remainder == 14) {
			results = "E" + remainder;
		}
		else if (remainder == 15) {
			results = "F" + remainder;
		}
		number = number / 16;
	}

	return "0x" + results;
}


std::string CalculatorPocessor::ToSubtractString(int number1, int number2)
{
	std::string results = "";

	results = number1 - number2;

	return results;
}


std::string CalculatorPocessor::ToEqualString(wxString Calculatorbtn, int number1, int number2)
{
	int op = 0;
	std::string opID[] = { "+","-",",*", "/" };
	std::string results = "";


	switch (op)
	{
	case 1009:
	{
		results =ToAddString( number1 , number2);
		break;
	}
	case 10013:
	{
		results =ToSubtractString( number1, number2);
		break;
	}
	case 10017:
	{
		results = ToMultiplyString( number1 ,number2);
		break;
	}
	case 10021:
	{
		results = ToDivideString( number1 ,number2);
		break;
	}
	}
	return results;
}

std::string CalculatorPocessor::ToMultiplyString(int number1, int number2)
{
	std::string results = 0;
	results = number1 * number2;


	return results;
}


std::string CalculatorPocessor::ToAddString(int number1, int number2)
{
	std::string results = 0;
	results = number1 + number2;

	return results;
}

std::string CalculatorPocessor::ToDivideString(int number1, int number2)
{
	std::string results = "";
	results = number1 / number2;


	return results;
}

std::string CalculatorPocessor::ToRemainderString(int number1, int number2)
{
	std::string results = 0;
	results = number1 % number2;


	return results;
}




