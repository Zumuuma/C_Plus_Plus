//�����ԃN���X�̗��p��

#include <iostream>
#include "list1008(Car).h"

using namespace std;

int main()
{
	string name;
	int width, length, height;
	double gas;

	cout << "�Ԃ̃f�[�^����͂���B\n";
	cout << "�Ԗ��� : ";
	cin >> name;
	cout << "�ԕ��� : ";
	cin >> width;
	cout << "�Ԓ��� : ";
	cin >> length;
	cout << "�ԍ��� : ";
	cin >> height;
	cout << "�K�\�����̗ʂ� : ";
	cin >> gas;

	Car myCar(name, width, length, height, gas);

	myCar.print_spec(); //�X�y�b�N��\��

	while (true)
	{
		cout << "���ݒn(" << myCar.x() << ", " << myCar.y() << ")\n";
		cout << "�c��R�� : " << myCar.fuel() << '\n';
		cout << "�ړ�[0...No/1...Yes] : ";

		int move;
		cin >> move;

		if (move == 0)
		{
			break;
		}

		double dx, dy;
		cout << "X�����̈ړ����� : ";
		cin >> dx;
		cout << "Y�����̈ړ����� : ";
		cin >> dy;

		if (!myCar.move(dx, dy))
		{
			cout << "\a�R��������܂���B\n";
		}
	}
}