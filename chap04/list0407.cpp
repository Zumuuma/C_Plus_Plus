//Šeí‚Ì•Ï”‚â’è”‚ÌŒ^î•ñ‚ğ•\¦

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	char c;
	short h;
	int i;
	long l;

	cout << "•Ï”c‚ÌŒ^ : " << typeid(c).name() << '\n';
	cout << "•Ï”h‚ÌŒ^ : " << typeid(h).name() << '\n';
	cout << "•Ï”i‚ÌŒ^ : " << typeid(i).name() << '\n';
	cout << "•Ï”l‚ÌŒ^ : " << typeid(l).name() << '\n';

	cout << "•¶šƒŠƒeƒ‰ƒ‹'A'‚ÌŒ^   : " << typeid('A').name() << '\n';
	cout << "®”ƒŠƒeƒ‰ƒ‹100‚ÌŒ^   : " << typeid(100).name() << '\n';
	cout << "®”ƒŠƒeƒ‰ƒ‹100U‚ÌŒ^  : " << typeid(100U).name() << '\n';
	cout << "®”ƒŠƒeƒ‰ƒ‹100L‚ÌŒ^  : " << typeid(100L).name() << '\n';
	cout << "®”ƒŠƒeƒ‰ƒ‹100UL‚ÌŒ^ : " << typeid(100UL).name() << '\n';
}