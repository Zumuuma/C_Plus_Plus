//自動車クラスの利用例

#include <iostream>
#include "list1008(Car).h"

using namespace std;

int main()
{
	string name;
	int width, length, height;
	double gas;

	cout << "車のデータを入力せよ。\n";
	cout << "車名は : ";
	cin >> name;
	cout << "車幅は : ";
	cin >> width;
	cout << "車長は : ";
	cin >> length;
	cout << "車高は : ";
	cin >> height;
	cout << "ガソリンの量は : ";
	cin >> gas;

	Car myCar(name, width, length, height, gas);

	myCar.print_spec(); //スペックを表示

	while (true)
	{
		cout << "現在地(" << myCar.x() << ", " << myCar.y() << ")\n";
		cout << "残り燃料 : " << myCar.fuel() << '\n';
		cout << "移動[0...No/1...Yes] : ";

		int move;
		cin >> move;

		if (move == 0)
		{
			break;
		}

		double dx, dy;
		cout << "X方向の移動距離 : ";
		cin >> dx;
		cout << "Y方向の移動距離 : ";
		cin >> dy;

		if (!myCar.move(dx, dy))
		{
			cout << "\a燃料が足りません。\n";
		}
	}
}