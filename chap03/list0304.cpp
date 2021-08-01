//正の整数値を０までカウントダウン（その１）

#include <iostream>

using namespace std;

int main()
{
	int x;

	cout << "カウントダウンします。\n";
	do
	{
		cout << "正の整数値 : ";
		cin >> x;
	} while (x <= 0);

	while (x >= 0)
	{
		cout << x << "\n"; //xの値を表示
		x--;			   //xの値をデクリメント（値を一つ減らす）
	}

	cout << "変数xの値 : " << x << "\n"; //xの値確認用
}