//“Ç‚İ‚ñ‚¾À”’l‚Í‚P‚O‚ÅŠ„‚èØ‚ê‚é‚©

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	double x;

	cout << "À”’l : ";
	cin >> x;

	if (double m = fmod(x, 10))
	{
		cout << "‚»‚Ì’l‚Í‚P‚O‚ÅŠ„‚èØ‚ê‚Ü‚¹‚ñB\n";
		cout << "è—]‚Í" << m << "‚Å‚·B\n";
	}
	else
	{
		cout << "‚»‚Ì’l‚Í‚P‚O‚ÅŠ„‚èØ‚ê‚Ü‚·B\n";
	}
}