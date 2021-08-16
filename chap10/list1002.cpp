//銀行口座クラス（第１版）とその利用例

#include <string>
#include <iostream>

using namespace std;

class Account //クラスを定義
{
public:
	string name;   //口座名義
	string number; //口座番号
	long balance;  //預金残高
};

int main()
{
	Account murayama; //村山さんの口座
	Account okada;	  //岡田さんの口座

	murayama.name = "村山彩希";	  //村山さんの口座名義
	murayama.number = "12345678"; //村山さんの口座番号
	murayama.balance = 1000;	  //村山さんの預金残高

	okada.name = "岡田奈々";   //岡田さんの口座名義
	okada.number = "87654321"; //岡田さんの口座番号
	okada.balance = 200;	   //岡田さんの預金残高

	murayama.balance -= 200; //村山さんが２００円おろす
	okada.balance += 100;	 //岡田さんが１００円預ける

	cout << "■村山さんの口座 : \"" << murayama.name << "\" (" << murayama.number
		 << ") " << murayama.balance << "円\n";

	cout << "■岡田さんの口座 : \"" << okada.name << "\" (" << okada.number
		 << ") " << okada.balance << "円\n";
}