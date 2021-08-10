//‚×‚«æ‚ğ‹‚ß‚é

#include <iostream>

using namespace std;

//---x‚Ìnæ‚ğ•Ô‚·---//
double power(double x, int n)
{
	double tmp = 1.0;

	while (n-- > 0)
	{
		tmp *= x; //tmp‚Éx‚ğ‚©‚¯‚é
	}

	return tmp;
}

int main()
{
	double a;
	int b;

	cout << "a‚Ìbæ‚ğ‹‚ß‚Ü‚·B\n";
	cout << "À”a : ";
	cin >> a;
	cout << "®”b : ";
	cin >> b;

	cout << a << "‚Ì" << b << "æ‚Í" << power(a, b) << "‚Å‚·B\n";
}