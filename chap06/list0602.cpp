//3人の数学・英語の最高得点を求めて表示

#include <iostream>

#define NUMBER 3

using namespace std;

//---a,b,cの最大値を返却---//
int max(int a, int b, int c)
{
	int max = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}

	return max;
}

int main()
{
	int math[3]; //数学
	int eng[3];	 //英語

	for (int i = 0; i < NUMBER; i++) //点数の読み込み
	{
		cout << "[" << i + 1 << "] ";
		cout << "数学 : ";
		cin >> math[i];
		cout << "    英語 : ";
		cin >> eng[i];
	}

	int max_math = max(math[0], math[1], math[2]); //数学の最高点
	int max_eng = max(eng[0], eng[1], eng[2]);	   //英語の最高点

	cout << "数学の最高点は" << max_math << "です。\n";
	cout << "英語の最高点は" << max_eng << "です。\n";
}