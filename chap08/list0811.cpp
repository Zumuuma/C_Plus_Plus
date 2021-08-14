//配列による文字列とポインタによる文字列

#include <iostream>

using namespace std;

int main()
{
	char a[][5] = {"Yuu", "Naa", "Mogi"};			 //配列による文字列の配列
	char *p[] = {"On", "YuuNaaMogiOn", "Channel!!"}; //ポインタによる文字列の配列

	for (int i = 0; i < 3; i++)
	{
		cout << "a[" << i << "] = \"" << a[i] << "\"\n";
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "p[" << i << "] = \"" << p[i] << "\"\n";
	}
}