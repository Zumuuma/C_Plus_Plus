//“Ç‚İ‚ñ‚¾Œ‚Ì‹Gß‚ğ•\¦

#include <iostream>

using namespace std;

int main()
{
	int month;

	cout << "‹Gß‚ğ‹‚ß‚Ü‚·B\n‰½Œ‚Å‚·‚© : ";
	cin >> month;

	if (month >= 3 && month <= 5)
	{
		cout << "‚»‚ê‚Ít‚Å‚·B\n";
	}
	else if (month >= 6 && month <= 8)
	{
		cout << "‚»‚ê‚Í‰Ä‚Å‚·B\n";
	}
	else if (month >= 9 && month <= 11)
	{
		cout << "‚»‚ê‚ÍH‚Å‚·B\n";
	}
	else if (month == 12 || month == 1 || month == 2)
	{
		cout << "‚»‚ê‚Í“~‚Å‚·B\n";
	}
	else
	{
		cout << "\a‚»‚ñ‚ÈŒ‚Í‚ ‚è‚Ü‚¹‚ñ‚æ‚—\n";
	}
}