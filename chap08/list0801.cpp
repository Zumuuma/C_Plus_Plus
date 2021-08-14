//•¶Žš—ñƒŠƒeƒ‰ƒ‹‚ÌŒ^‚Æ‘å‚«‚³‚ð•\Ž¦

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	cout << "¡•¶Žš—ñƒŠƒeƒ‰ƒ‹\"ABC\"\n";
	cout << "  Œ^ : " << typeid("ABC").name()
		 << "  ‘å‚«‚³" << sizeof("ABC") << "\n\n";

	cout << "¡•¶Žš—ñƒŠƒeƒ‰ƒ‹\"\"\n";
	cout << "  Œ^ : " << typeid("").name()
		 << "  ‘å‚«‚³ : " << sizeof("") << "\n\n";

	cout << "¡•¶Žš—ñƒŠƒeƒ‰ƒ‹\"ABC\\0DEF\"\n";
	cout << "  Œ^ : " << typeid("ABC\0DEF").name()
		 << "  ‘å‚«‚³ : " << sizeof("ABC\0DEF") << '\n';
}