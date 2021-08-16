//村山さんと岡田さんの銀行口座

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string murayama_name = "村山彩希";	 //村山さんの口座名義
	string murayama_number = "12345678"; //村山さんの口座番号
	long murayama_balance = 1000;		 //村山さんの預金残高

	string okada_name = "岡田奈々";	  //岡田さんの口座名義
	string okada_number = "87654321"; //岡田さんの口座番号
	long okada_balance = 200;		  //岡田さんの預金残高

	murayama_balance -= 200; //村山さんが２００円おろす
	okada_balance += 100;	 //岡田さんが１００円預ける

	cout << "■村山さんの口座 : \"" << murayama_name << "\" (" << murayama_number
		 << ") " << murayama_balance << "円\n";

	cout << "■岡田さんの口座 : \"" << okada_name << "\" (" << okada_number
		 << ") " << okada_balance << "円\n";
}