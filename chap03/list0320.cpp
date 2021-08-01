//“Ç‚İ‚ñ‚¾®”‚ğ‰ÁZi‚X‚X‚X‚X‚ª“ü—Í‚³‚ê‚é‚Æ‹­§I—¹j

#include <iostream>

using namespace std;

int main()
{
	int n; //‰ÁZ
	cout << "®”‚ğ‰ÁZ‚µ‚Ü‚·B\n";
	cout << "‰½ŒÂ‰ÁZ‚µ‚Ü‚·‚© : ";
	cin >> n;
	cout << "‚X‚X‚X‚X‚Å‹­§I—¹‚µ‚Ü‚·B\n";

	int sum = 0; //‡Œv’l
	for (int i = 0; i < n; i++)
	{
		int t;
		cout << "®” : ";
		cin >> t;
		if (t == 9999)
		{
			goto Exit;
		}
		sum += t;
	}
	cout << "‡Œv‚Í" << sum << "‚Å‚·B\n";

Exit:;
}