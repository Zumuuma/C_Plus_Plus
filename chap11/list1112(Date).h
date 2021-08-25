//���t�N���XDate�i��R�ŁF�w�b�_���j

#ifndef ___Class_Date
#define ___Class_Date

#include <string>
#include <iostream>

//=====���t�N���X=====//
class Date
{
	int y; //����N
	int m; //��
	int d; //��

public:
	Date();								  //�f�t�H���g�R���X�g���N�^
	Date(int yy, int mm = 1, int dd = 1); //�R���X�g���N�^�y�錾�z

	int year() const { return y; }	//�N��ԋp
	int month() const { return m; } //����ԋp
	int day() const { return d; }	//����ԋp

	Date preceding_day() const; //�O���̓��t��ԋp�i���邤�N�ɔ�Ή��j

	int day_of_week() const; //�j����ԋp�y�錾�z

	std::string to_string() const; //������\����ԋp
};

std::ostream &operator<<(std::ostream &s, const Date &x); //�}���q
std::istream &operator>>(std::istream &s, Date &x);		  //���o�q

#endif