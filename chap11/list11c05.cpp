//#if�w�߂ɂ��v���O�����̃R�����g�A�E�g

#include <iostream>

using namespace std;

#define DEBUG 1 //�O���ƌ��ʂ́u�T�v�ƕ\������A�P���ƌ��ʂ́u�V�v�ƕ\�������i���X�C�b�`�݂����Ȃ��́j

int main()
{
	int a = 5;
	int x = 7;

#if DEBUG == 1
	a = x; //a��x����
#endif

	cout << "a�̒l��" << a << "�ł��B\n";
}