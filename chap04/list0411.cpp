//��̐����l�̕��ϒl�����߂�

#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cout << "��̐����lx��y�̕��ϒl�����߂܂��B\n";
	cout << "x�̒l : ";
	cin >> x; //x�ɐ����l��ǂݍ���
	cout << "y�̒l : ";
	cin >> y; //y�ɐ����l��ǂݍ���

	double ave = (x + y) / 2;					   //���ϒl�����߂�
	cout << "x��y�̕��ϒl��" << ave << "�ł��B\n"; //���ϒl��\��
}