//®””z—ñƒNƒ‰ƒXIntArrayi‘æ‚R”Åj‚Ì—˜—p—á

#include <iomanip>
#include <iostream>
#include "list1404(IntArray).h"

using namespace std;

int main()
{
	int n;
	cout << "a‚Ì—v‘f” : ";
	cin >> n;

	IntArray a(n); //—v‘f”n‚Ì”z—ñ

	for (int i = 0; i < a.size(); i++)
	{
		a[i] = i;
	}

	IntArray b(128); //—v‘f”‚P‚Q‚W‚Ì”z—ñ
	IntArray c(256); //—v‘f”‚Q‚T‚U‚Ì”z—ñ

	cout << "b‚Æc‚Ì—v‘f”‚Í" << b.size() << "‚Æ" << c.size();
	c = b = a; //‘ã“ü
	cout << "‚©‚ç" << b.size() << "‚Æ" << c.size() << "‚É•Ï‚í‚è‚Ü‚µ‚½B\n";

	IntArray d = b; //‰Šú‰»

	cout << "    a    b    c    d\n";
	cout << "---------------------\n";
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << a[i] << setw(5) << b[i]
			 << setw(5) << c[i] << setw(5) << d[i] << '\n';
	}
}