#include <iostream>

using namespace std;

int main()
{
	int x;
	do
	{
		cout << "³‚Ì®”’l : ";
		cin >> x;
	} while (x <= 0);

	int y = x;
	int z = x;
	while (y >= 0)
	{
		cout << y-- << ' ' << ++z << '\n';
	}

	cout << "c‰¡‚ª®”‚Å–ÊÏ‚ª\"" << x
		 << "\"‚Ì’·•ûŒ`‚Ì•Ó‚Ì’·‚³ : \n";
	for (int i = 1; i < x; i++)
	{
		if (i * i > x)
		{
			break;
		}
		if (x % i != 0)
		{
			continue;
		}
		cout << i << " X " << x / i << '\n';
	}

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			cout << '\'';
		}
		cout << '\n';
	}
}