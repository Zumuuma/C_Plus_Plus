//”z—ñ‚ÌŒ^‚Æ—v‘fŒ^‚ð•\Ž¦

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int a[5];
	double b[7];

	cout << "”z—ña‚ÌŒ^ : " << typeid(a).name() << '\n';	   //int‚Ì”z—ñ
	cout << "a‚Ì—v‘fŒ^ : " << typeid(a[0]).name() << '\n'; //‚»‚Ì—v‘f

	cout << "”z—ñb‚ÌŒ^ : " << typeid(b).name() << '\n';	   //double‚Ì”z—ñ
	cout << "b‚Ì—v‘fŒ^ : " << typeid(b[0]).name() << '\n'; //‚»‚Ì—v‘f
}