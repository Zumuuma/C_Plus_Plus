//例外の送出と補足

#include <new>
#include <iostream>

using namespace std;

//===オーバーフロークラス===//
class OverFlow
{
};

//---xの２倍を返す---//
int f(int x)
{
	if (x < 0)
	{
		throw "おかしい。値が負になっています。\n"; //const char*型の例外を送出
	}
	else if (x > 30000)
	{
		throw OverFlow(); //OverFlow型の例外を送出
	}
	else
	{
		return 2 * x; //例外は送出されない
	}
}

int main()
{
	int a;
	cout << "整数 : ";
	cin >> a;

	try
	{
		int b = f(a);
		cout << "その数の２倍は" << b << "です。\n";
	}
	catch (const char *str) //文字列の例外を補足
	{
		cout << "\a例外発生 : " << str;
	}
	catch (OverFlow) //OverFlow型の例外はここで補足
	{
		cout << "\aオーバーフローしました。プログラムを終了します。\n";
		return 1;
	}
}