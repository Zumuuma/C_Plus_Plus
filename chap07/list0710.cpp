//�g���̍ő�l�Ƒ̏d�̍ő�l�����߂�

#include <iostream>

using namespace std;

//---�v�f��n�̔z��a�̍ő�l��ԋp---//
int maxof(const int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	return max;
}

int main()
{
	const int NUMBER = 5;				//�l��
	int height[NUMBER], weight[NUMBER]; //�g���E�̏d

	cout << NUMBER << "�l�̐g���Ƒ̏d����͂���B\n";
	for (int i = 0; i < NUMBER; i++)
	{
		cout << i + 1 << "�Ԗڂ̐g�� : ";
		cin >> height[i];
		cout << i + 1 << "�Ԗڂ̑̏d : ";
		cin >> weight[i];
	}

	int hmax = maxof(height, NUMBER); //�g���̍ő�l
	int wmax = maxof(weight, NUMBER); //�̏d�̍ő�l

	cout << "�g���̍ő�l : " << hmax << "cm\n";
	cout << "�̏d�̍ő�l : " << wmax << "kg\n";
}