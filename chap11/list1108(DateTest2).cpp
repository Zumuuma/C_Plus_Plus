//���t�N���XDate�i��Q�Łj�̗��p��i�����o�֐�to_string�̓������m�F�j

#include <iostream>
#include "list1105(Date).h"

using namespace std;

int main()
{
	const Date birthday(1994, 3, 26); //�܂��̒a����
	Date day[3];					  //�z��i�����̓��t�j

	cout << "birthday = " << birthday << '\n';
	cout << "birthday�̕�����\�� : \"" << birthday.to_string() << "\"\n";

	for (int i = 0; i < 3; i++)
	{
		cout << "day[" << i << "]�̕�����\�� : \"" << day[i].to_string() << "\"\n";
	}
}