//“Ç‚İ‚ñ‚¾®”’l‚Í‚P‚O‚ÅŠ„‚èØ‚ê‚é‚Ì‚©

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "®”’l : ";
	cin >> n;

	if (int mod = n % 10)
	{
		cout << "‚»‚Ì’l‚Í‚P‚O‚ÅŠ„‚èØ‚ê‚Ü‚¹‚ñB\n";
		cout << "Å‰ºˆÊŒ…‚Í" << mod << "‚Å‚·B\n";
	}
	else
	{
		cout << "‚»‚Ì’l‚Í‚P‚O‚ÅŠ„‚èØ‚ê‚Ü‚·B\n";
	}
}