//銀行口座クラス（第５版）の利用例

#include <iostream>
#include "list1109(Account).h"

using namespace std;

int main()
{
	Account murayama("村山彩希", "12345678", 1000, 1997, 6, 15); //村山さんの口座
	Account okada("岡田奈々", "87654321", 200, 1997, 11, 7);	 //岡田さんの口座

	murayama.withdraw(200); //村山さんが２００円おろす
	okada.deposit(100);		//岡田さんが１００円預ける

	cout << "村山さんの口座\n";
	cout << "口座名義＝" << murayama.name() << '\n';
	cout << "口座名義＝" << murayama.no() << '\n';
	cout << "預金残高＝" << murayama.balance() << "円\n";
	cout << "開 設 日＝" << murayama.opening_date() << '\n';

	cout << '\n';

	cout << "岡田さんの口座\n";
	cout << "口座名義＝" << okada.name() << '\n';
	cout << "口座番号＝" << okada.no() << '\n';
	cout << "預金残高＝" << okada.balance() << "円\n";
	cout << "開 設 日＝" << okada.opening_date().year() << "年"
		 << okada.opening_date().month() << "月"
		 << okada.opening_date().day() << "日\n";
}