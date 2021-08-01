//“Ç‚İ‚ñ‚¾®”‚ğ‰ÁZi‡Œv‚ª‚PC‚O‚O‚O‚ğ’´‚¦‚È‚¢”ÍˆÍ‚Å‰ÁZ‚·‚éj

#include <iostream>

using namespace std;

int main()
{
	int n; //‰ÁZ‚·‚éŒÂ”
	cout << "®”‚ğ‰ÁZ‚µ‚Ü‚·B\n";
	cout << "‰½ŒÂ‰ÁZ‚µ‚Ü‚·‚© : ";
	cin >> n;

	int sum = 0; //‡Œv’l
	for (int i = 0; i < n; i++)
	{
		int t;
		cout << "®” : ";
		cin >> t;
		if (sum + t > 1000)
		{
			cout << "\a‡Œv‚ª‚P,‚O‚O‚O‚ğ’´‚¦‚Ü‚µ‚½B\nÅŒã‚Ì”’l‚Í–³‹‚µ‚Ü‚·B\n";
			break;
		}
		sum += t;
	}
	cout << "‡Œv‚Í" << sum << "‚Å‚·B\n";
}