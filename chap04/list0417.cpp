//�I�΂ꂽ�����̖�����\��

#include <iostream>

using namespace std;

int main()
{
	enum animal
	{
		Dog,
		Cat,
		Monkey,
		Invalid
	};
	int type;

	do
	{
		cout << "0...�� 1...�L 2...�� 3...�I�� : ";
		cin >> type;
	} while (type < Dog || type > Invalid);

	if (type != Invalid)
	{
		animal selected = static_cast<animal>(type);
		switch (selected)
		{
		case Dog:
			cout << "���������I�I\n";
			break;
		case Cat:
			cout << "�j���`�I�I�I\n";
			break;
		case Monkey:
			cout << "�L�b�L�b�I�I\n";
			break;
		}
	}
}