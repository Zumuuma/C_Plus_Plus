//前置形式++xは《左辺値式》で後置形式x++《右辺形式》であることを確認

#include <iostream>

using namespace std;

int main()
{
	int x = 0;

	++x = 5; //OK : 前置形式は左辺に置ける
	cout << "xの値は" << x << "です。\n";

	/*x++ = 10;後置形式は左辺に置けない（コンパイルエラー）
	cout << "xの値は" << x << "です。\n";*/
}