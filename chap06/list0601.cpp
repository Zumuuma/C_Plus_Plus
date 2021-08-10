//3人の数学・英語の最高得点を求めて表示

#include <iostream>

#define NUMBER 3

using namespace std;

int main()
{
	int math[3]; //数学の点数
	int eng[3];	 //英語の点数

	for (int i = 0; i < NUMBER; i++)
	{
		cout << "[" << i + 1 << "] ";
		cout << "数学 : ";
		cin >> math[i];
		cout << "    英語 : ";
		cin >> eng[i];
	}

	int max_math = math[0]; //数学の最高点
	if (math[1] > max_math)
	{
		max_math = math[1];
	}
	if (math[2] > max_math)
	{
		max_math = math[2];
	}

	int max_eng = eng[0]; //英語の最高点
	if (eng[1] > max_eng)
	{
		max_eng = eng[1];
	}
	if (eng[2] > max_eng)
	{
		max_eng = eng[2];
	}

	cout << "数学の最高点は" << max_math << "です。\n";
	cout << "英語の最高点は" << max_eng << "です。\n";
}