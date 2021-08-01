//読み込んだ値に応じてジャンケンの手を表示（０，１，２のみを受け付ける）

#include <iostream>

using namespace std;

int main()
{
	int hand;

	do
	{
		cout << "手を選んでください（０…グー/１…チョキ/２…パー） : ";
		cin >> hand;
	} while (hand < 0 || hand > 2);

	switch (hand)
	{
	case 0:
		cout << "グー\n";
		break;
	case 1:
		cout << "チョキ\n";
		break;
	case 2:
		cout << "パー\n";
		break;
	}
}