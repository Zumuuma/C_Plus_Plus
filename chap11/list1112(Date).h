//日付クラスDate（第３版：ヘッダ部）

#ifndef ___Class_Date
#define ___Class_Date

#include <string>
#include <iostream>

//=====日付クラス=====//
class Date
{
	int y; //西暦年
	int m; //月
	int d; //日

public:
	Date();								  //デフォルトコンストラクタ
	Date(int yy, int mm = 1, int dd = 1); //コンストラクタ【宣言】

	int year() const { return y; }	//年を返却
	int month() const { return m; } //月を返却
	int day() const { return d; }	//日を返却

	Date preceding_day() const; //前日の日付を返却（うるう年に非対応）

	int day_of_week() const; //曜日を返却【宣言】

	std::string to_string() const; //文字列表現を返却
};

std::ostream &operator<<(std::ostream &s, const Date &x); //挿入子
std::istream &operator>>(std::istream &s, Date &x);		  //抽出子

#endif