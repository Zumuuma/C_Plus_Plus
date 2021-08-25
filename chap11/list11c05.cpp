//#if指令によるプログラムのコメントアウト

#include <iostream>

using namespace std;

#define DEBUG 1 //０だと結果は「５」と表示され、１だと結果は「７」と表示される（←スイッチみたいなもの）

int main()
{
	int a = 5;
	int x = 7;

#if DEBUG == 1
	a = x; //aにxを代入
#endif

	cout << "aの値は" << a << "です。\n";
}