//‘½ŽŸŒ³”z—ñ‚ÌŒ^‚Æ—v‘fŒ^‚ð•\Ž¦

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int a[5][3];	   //‚QŽŸŒ³”z—ñ
	double b[4][2][3]; //‚RŽŸŒ³”z—ñ

	cout << "”z—ña‚ÌŒ^ : " << typeid(a).name() << '\n';
	cout << "a‚Ì—v‘fŒ^ : " << typeid(a[0]).name() << '\n';
	cout << "”z—ñb‚ÌŒ^ : " << typeid(b).name() << '\n';
	cout << "b‚Ì—v‘fŒ^ : " << typeid(b[0]).name() << '\n';
}