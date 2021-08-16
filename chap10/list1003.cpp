//銀行口座クラス（第２版）とその利用例

#include <string>
#include <iostream>

using namespace std;

class Account
{
private:
	string full_name;  //口座名義
	string number;	   //口座番号
	long crnt_balance; //預金残高

public:
	//---コンストラクタ---//
	Account(string name, string num, long amnt)
	{
		full_name = name;	 //口座名義
		number = num;		 //口座番号
		crnt_balance = amnt; //預金残高
	}

	//---口座名義を調べる---//
	string name()
	{
		return full_name;
	}

	//---口座番号を調べる---//
	string no()
	{
		return number;
	}

	//---預金残高を調べる---//
	long balance()
	{
		return crnt_balance;
	}

	//---預ける---//
	void deposit(long amnt)
	{
		crnt_balance += amnt;
	}

	//---おろす---//
	void withdraw(long amnt)
	{
		crnt_balance -= amnt;
	}
};

int main()
{
	Account murayama("村山彩希", "12345678", 1000); //村山さんの口座
	Account okada("岡田奈々", "87654321", 200);		//岡田さんの口座

	murayama.withdraw(200); //村山さんが２００円おろす
	okada.deposit(100);		//岡田さんが１００円預ける

	cout << "■村山さんの口座 : \"" << murayama.name() << "\" (" << murayama.no()
		 << ") " << murayama.balance() << "円\n";

	cout << "■岡田さんの口座 : \"" << okada.name() << "\" (" << okada.no()
		 << ") " << okada.balance() << "円\n";
}