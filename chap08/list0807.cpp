//�󂯎���������񒆂̏�������啶���ɕϊ����ĕ\��

#include <cctype>
#include <iostream>

using namespace std;

//---������s��\���i�������͑啶���ɕϊ��j---//
void put_upper(const char s[])
{
	for (int i = 0; i < s[i]; i++)
	{
		cout << static_cast<char>(toupper(s[i]));
	}
}

int main()
{
	char str[32];

	cout << "������ : ";
	cin >> str;

	put_upper(str);
	cout << '\n';
}