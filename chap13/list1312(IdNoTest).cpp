//識別番号クラスIdNo（第２版）の利用例

#include <iostream>
#include "list1310(IdNo).h"

using namespace std;

int main()
{
	IdNo a; //識別番号１番
	IdNo b; //識別番号２番

	cout << "aの識別番号 : " << a.id() << '\n';
	cout << "bの識別番号 : " << b.id() << '\n';
	cout << "現在までに与えた識別番号の最大値 : " << IdNo::get_max_id() << '\n';
}