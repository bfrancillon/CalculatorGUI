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

int CalculatorPocessor::negative(int number)
{
	return number * (-1);
}

float CalculatorPocessor::ToOperatorString(int num1, int num2, char sym)
{
	float retn = ' ';
	switch (sym)
	{
	case '+':
		retn = num1 + num2;
		break;
	case '*':
		retn = num1 * num2;
		break;
	case '-':
		retn = num1 - num2;
		break;
	case '/':
		retn = num1 / num2;
		break;
	case  '%':
		retn = (int)num1 % (int)num2;
		break;

	}

	return retn;
}










