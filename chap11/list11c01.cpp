//���t�N���XDate�i�����o�֐��Ăяo���񐔃J�E���^�t���j

#include <iostream>

using namespace std;

class Date
{
	int y;				 //����N
	int m;				 //��
	int d;				 //��
	mutable int counter; //�����o�֐����Ăяo���ꂽ����

public:
	Date(int yy, int mm, int dd) //�R���X�g���N�^
	{
		y = yy;
		m = mm;
		d = dd;
		counter = 0;
	}

	int year() const //�R���X�g���N�^���Ăяo�����J�E���^���C���N�������g���ĔN��ԋp
	{
		counter++;
		return y;
	}
	int month() const //�R���X�g���N�^���Ăяo�����J�E���^���C���N�������g���Č���ԋp
	{
		counter++;
		return m;
	}
	int day() const //�R���X�g���N�^���Ăяo�����J�E���^���C���N�������g���ē���ԋp
	{
		counter++;
		return d;
	}
	int count() const //�R���X�g���N�^�J�E���^��ԋp
	{
		return counter;
	}
};

int main()
{
	const Date birthday(1994, 3, 26); //�a����

	cout << "birthday = " << birthday.year() << "�N" << birthday.month() << "��" << birthday.day() << "��\n";
	cout << "birthday�̃����o�֐���" << birthday.count() << "��Ăяo���܂����B\n";
}