//strlen�֐��̗��p��i���̂P�j

#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char str[100];

	cout << "���������͂��Ă������� : ";
	cin >> str;

	cout << "������\"" << str << "\"�̒�����" << strlen(str) << "�ł��B\n";
}