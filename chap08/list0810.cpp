//ƒ|ƒCƒ“ƒ^‚É‚æ‚é•¶š—ñ‚Ì‘‚«Š·‚¦

#include <iostream>

using namespace std;

int main()
{
	char *p = "ABC";

	cout << "p = \"" << p << "\"\n";

	p = "XYZ"; //OK!!

	cout << "p = \"" << p << "\"\n";
}