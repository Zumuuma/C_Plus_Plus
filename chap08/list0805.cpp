//名前を訪ねて挨拶（文字列の読み込みと表示）

#include <iostream>

using namespace std;

int main()
{
	char name[64];

	cout << "お名前は(63文字以内で) : ";
	cin.getline(name, 64, '\n');

	cout << "こんにちは、" << name << "さん!!\n";
}