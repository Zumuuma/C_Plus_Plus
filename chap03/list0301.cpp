//“ü—Í‚³‚ê‚½Œ‚Ì‹Gß‚ğ•\¦iD‚«‚È‚¾‚¯ŒJ‚è•Ô‚¹‚éj

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string retry; //‚à‚¤ˆê“xH
	do
	{
		int month;
		cout << "‹Gß‚ğ‹‚ß‚Ü‚·B\n‰½Œ‚Å‚·‚© : ";
		cin >> month;

		if (month >= 3 && month <= 5) //‚RŒE‚SŒE‚TŒ
		{
			cout << "‚»‚ê‚Ít‚Å‚·B\n";
		}
		else if (month >= 6 && month <= 8) //‚UŒE‚VŒE‚WŒ
		{
			cout << "‚»‚ê‚Í‰Ä‚Å‚·B\n";
		}
		else if (month >= 9 && month <= 11) //‚XŒE‚P‚OŒE‚P‚PŒ
		{
			cout << "‚»‚ê‚ÍH‚Å‚·B\n";
		}
		else if (month == 12 || month == 1 || month == 2) //‚P‚QŒE‚PŒE‚QŒ
		{
			cout << "‚»‚ê‚Í“~‚Å‚·B\n";
		}
		else
		{
			cout << "\a‚»‚ñ‚ÈŒ‚Í‚ ‚è‚Ü‚¹‚ñ‚æ‚—\n";
		}

		do
		{
			cout << "‚à‚¤ˆê“xH@Y...Yes/N...No : ";
			cin >> retry;
		} while (retry != "Y" && retry != "y" && retry != "N" && retry != "n");

	} while (retry == "Y" || retry == "y");
}