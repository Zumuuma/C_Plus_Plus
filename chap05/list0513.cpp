//½³zñÌ^Ævf^ð\¦

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int a[5][3];	   //Q³zñ
	double b[4][2][3]; //R³zñ

	cout << "zñaÌ^ : " << typeid(a).name() << '\n';
	cout << "aÌvf^ : " << typeid(a[0]).name() << '\n';
	cout << "zñbÌ^ : " << typeid(b).name() << '\n';
	cout << "bÌvf^ : " << typeid(b[0]).name() << '\n';
}