//�P���炎�܂ł̘a�����߂�

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "�P���炎�܂ł̘a�����߂܂��B\n";
	do
	{
		cout << "���̒l : ";
		cin >> n;
	} while (n <= 0);

	int sum = 0; //���v
	int i = 1;
	while (cout << "i = " << i << " sum = " << sum << '\n', i <= n)
	{
		sum += i; //sum��i��������
		i++;	  //i���C���N�������g
	}
	cout << "�P����" << n << "�܂ł̘a��" << sum << "�ł��B\n";
}