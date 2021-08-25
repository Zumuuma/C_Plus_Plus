//銀行口座クラス（第６版）の利用例

#include <iostream>
#include "list1112(Date).h"
#include "list1114(Account).h"

using namespace std;

int main()
{
	Account mayu("渡辺麻友", "123456789", 3948, Date(1994, 3, 26)); //まゆゆの口座
	string dw[] = {"日", "月", "火", "水", "木", "金", "土"};

	cout << "まゆゆの口座\n";
	cout << "口座名義＝" << mayu.name() << '\n';
	cout << "口座番号＝" << mayu.no() << '\n';
	cout << "開 設 日＝" << mayu.balance() << "円\n";
	cout << "開 設 日＝" << mayu.opening_date();
	cout << " (" << dw[mayu.opening_date().day_of_week()] << ") \n";
}