//�x���𔭂���֐��i�f�t�H���g�������j

#include <iostream>

using namespace std;

//---n��̌x��𔭂���---//
void alerts(int n = 3)
{
	while (n-- > 0)
	{
		cout << '\a';
		_sleep(2500);
	}
}

int main()
{
	alerts();
	cout << "�x��I\n";

	_sleep(1000);

	alerts(5);
	cout << "�Ăьx��I\n";
}