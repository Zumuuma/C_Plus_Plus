//コンストラクタ初期化子の呼び出し順序を確認

#include <iostream>

using namespace std;

class Int
{
	int v; //値
public:
	Int(int val) : v(val) { cout << v << '\n'; }
};

class Abc
{
	Int a; //宣言順に初期化される
	Int b;
	Int c; //クラス定義中のデータメンバの宣言の順で行われます。

public:													 //初期化はこの順ではない（コンストラクタ初期化子におけるメンバ初期化子の並びの順序とは無関係です。）
	Abc(int aa, int bb, int cc) : c(cc), b(bb), a(aa) {} //コンストラクタ
};

int main()
{
	Abc x(1, 2, 3);
}