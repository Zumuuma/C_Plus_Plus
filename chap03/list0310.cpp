//‚P‚©‚ç‚‚Ü‚Å‚Ì˜a‚ğ‹‚ß‚é

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "‚P‚©‚ç‚‚Ü‚Å‚Ì˜a‚ğ‹‚ß‚Ü‚·B\n";
	do
	{
		cout << "‚‚Ì’l : ";
		cin >> n;
	} while (n <= 0);

	int sum = 0; //‡Œv
	int i = 1;
	while (cout << "i = " << i << " sum = " << sum << '\n', i <= n)
	{
		sum += i; //sum‚Éi‚ğ‰Á‚¦‚é
		i++;	  //i‚ğƒCƒ“ƒNƒŠƒƒ“ƒg
	}
	cout << "‚P‚©‚ç" << n << "‚Ü‚Å‚Ì˜a‚Í" << sum << "‚Å‚·B\n";
}