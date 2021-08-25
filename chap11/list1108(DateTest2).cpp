//日付クラスDate（第２版）の利用例（メンバ関数to_stringの働きを確認）

#include <iostream>
#include "list1105(Date).h"

using namespace std;

int main()
{
	const Date birthday(1994, 3, 26); //まゆゆの誕生日
	Date day[3];					  //配列（今日の日付）

	cout << "birthday = " << birthday << '\n';
	cout << "birthdayの文字列表現 : \"" << birthday.to_string() << "\"\n";

	for (int i = 0; i < 3; i++)
	{
		cout << "day[" << i << "]の文字列表現 : \"" << day[i].to_string() << "\"\n";
	}
}