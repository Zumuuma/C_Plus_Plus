//日付クラスDate（第１版：ソース部）

#include "list1101(Date).h"

//---クラスDateのコンストラクタ【定義】---//
Date::Date(int yy, int mm, int dd)
{
	y = yy; //西暦年
	m = mm; //月
	d = dd; //日
}