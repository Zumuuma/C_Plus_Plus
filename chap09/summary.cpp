#include <iostream>
#include "maxof.h"

using namespace std;

int main()
{
	int a, b;
	char s[64], t[64];

	cout << "®”a : ";
	cin >> a;
	cout << "®”b : ";
	cin >> b;
	cout << "•¶Žš—ñs : ";
	cin >> s;
	cout << "•¶Žš—ñt : ";
	cin >> t;

	cout << "a‚Æb‚Å‘å‚«‚¢‚Ì‚Í" << maxof(a, b) << "‚Å‚·B\n";
	cout << "s‚Æt‚Å‘å‚«‚¢‚Ì‚Í" << maxof<const char *>(s, t) << "‚Å‚·B\n";
	cout << "s‚Æ\"ABC\"‚Å‘å‚«‚¢‚Ì‚Í" << maxof<const char *>(s, "ABC") << "‚Å‚·B\n";
}