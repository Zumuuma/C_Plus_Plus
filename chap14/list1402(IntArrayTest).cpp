//�����z��N���XIntArray�i��P�Łj�̗��p��

#define INCLUDE_SELECT 1
#include <iostream>

#if INCLUDE_SELECT == 0
#include "list1401(IntArray).h" //��P�Łi�����Łj
#endif

#if INCLUDE_SELECT == 1
#include "list1403(IntArray).h" //��Q�Łi���ǔŁj
#endif

using namespace std;

int main()
{
	int n;

	cout << "�v�f������͂��� : ";
	cin >> n;

	IntArray x(n); //�v�f��n�̔z��

	for (int i = 0; i < x.size(); i++)
	{
		x[i] = i;
	}

	for (int i = 0; i < x.size(); i++)
	{
		cout << "x[" << i << "] = " << x[i] << '\n';
	}
}