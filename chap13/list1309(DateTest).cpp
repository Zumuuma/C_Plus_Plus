//���t�N���XDate�i��S�Łj�̗��p��

#include <iostream>
#include "list1307(Date).h"

using namespace std;

int main()
{
	Date today; //����

	cout << "���@���̓��t : " << today << '\n';

	cout << "���@���̓��t : " << today.preceding_day() << '\n';
	cout << "�����̓��t : " << today.preceding_day().preceding_day() << '\n';

	cout << "���@���̓��t : " << today.following_day() << '\n';
	cout << "������̓��t : " << today.following_day().following_day() << '\n';

	cout << "���U����" << today.day_of_year() << "���o�߂��Ă��܂��B\n";

	cout << "���N�͂��邤�N"
		 << (today.is_leap() ? "�ł��B" : "�ł͂���܂���B") << '\n';

	int y, m, d;

	cout << "����N : ";
	cin >> y;

	cout << "���̔N�͂��邤�N"
		 << (Date::is_leap(y) ? "�ł��B" : "�ł͂���܂���B") << '\n';
}