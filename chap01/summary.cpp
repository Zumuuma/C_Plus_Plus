//サンプル・プログラム

#include <ctime>	//乱数の生成に必要
#include <cstdlib>	//乱数の生成に必要
#include <string>	//文字列の利用に必要
#include <iostream> //ストリーム入出力に必要

using namespace std; //using命令

int main()
{
	int a;	   //aはint型の変数
	a = 1;	   //代入（生成ずみの変数に値を入れる）
	int b = 5; //初期化（変数の生成時に値を入れる）

	//---乱数生成の準備---
	srand(time(NULL));		 //乱数の種を設定
	int lucky = rand() % 10; //0~9の乱数

	cout << "今日のラッキーナンバーは" << lucky << "です。\n";
	cout << "２で割った商は" << lucky / 2 << "です。\n";
	cout << "２で割った剰余は" << lucky % 2 << "です。\n";

	//定数オブジェクト（値を書き換えられない変数）
	const double PI = 3.14;
	double r;
	cout << "半径 : ";
	cin >> r;
	cout << "半径" << r << "の円の面積は"
		 << (PI * r * r) << "です。\n";

	string name; //名前

	cout << "お名前は : "; //入力を促す
	cin >> name;		   //読み込む（空白は読み飛ばす）
	cout << "\aこん"
			"にちは！"
		 << name << "さん。\n";
}