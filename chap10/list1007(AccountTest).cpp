//銀行口座クラス（第４版）の利用例

#include <string>
#include <iostream>
#include "list1005(Account).h"

using namespace std;

//---pが指すAccountの口座情報（口座名義・口座番号・預金残高）を表示---//
void print_Account(string title, Account *p)
{
	cout << title
		 << '\"' << p->name() << "\" (" << p->no() << ") " << p->balance() << "円\n";
}

int main()
{
	Account murayama("村山彩希", "12345678", 1000); //村山さんの口座
	Account okada("岡田奈々", "87654321", 200);		//岡田さんの口座

	murayama.withdraw(200); //村山さんが２００円おろす
	okada.deposit(100);		//岡田さんが１００円預ける

	print_Account("■村山さんの口座 : ", &murayama);

	print_Account("■岡田さんの口座 : ", &okada);
}