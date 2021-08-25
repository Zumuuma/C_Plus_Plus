//文字列からの抽出

#include <sstream>
#include <iostream>

using namespace std;

int main()
{
	string s = "1919/8/10"; //イくイく野獣

	istringstream is(s); //文字列sに接続された文字列入力ストリーム

	int y, m, d; //年・月・日の整数値の格納先
	char ch;	 //スラッシュを空読みするためのもの

	is >> y >> ch >> m >> ch >> d;				   //年・月・日の整数値と区切り文字を抽出子>>で抽出
	cout << y << "年" << m << "月" << d << "日\n"; //表示
}