//�����`�ƒ����`��\��

#include <iostream>

using namespace std;

//---����c��n�A���\��---//
void put_nchar(char c, int n)
{
	while (n-- > 0)
	{
		cout << c;
	}
}

//---����c����ׂĈ�ӂ̒���n�̐����`��\��---//
void put_square(int n, char c = '*')
{
	for (int i = 1; i <= n; i++) //�S����n�s
	{
		put_nchar(c, n); //����c��n�\������
		cout << '\n';	 //���s����
	}
	cout << '\n';
}

//---����c����ׂč�����h�ŉ�����w�̒����`��\��---//
void put_rectangle(int h, int w, char c = '*')
{
	for (int i = 1; i <= h; i++) //�S����h�s
	{
		put_nchar(c, w); //����c��w�\������
		cout << '\n';	 //���s����
	}
	cout << '\n';
}

int main()
{
	int n, h, w;

	cout << "�����`��\�����܂��B\n";

	put_square(5, '+'); //'+'����ׂ���ӂT�̐����`
	put_square(5);		//'*'����ׂ���ӂT�̐����`

	cout << "�����`��\�����܂��B\n";

	put_rectangle(4, 3, '-'); //'-'����ׂ��S�s�R��̒����`
	put_rectangle(4, 3);	  //'*'����ׂ��S�s�R��̒����`
}