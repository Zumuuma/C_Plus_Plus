//�����ԃN���X

#include <cmath>
#include <string>
#include <iostream>

class Car
{
	std::string name;		   //�Ԗ�
	int width, length, height; //�ԕ��E�Ԓ��E�ԍ�
	double xp, yp;			   //���݈ʒu���W
	double fuel_level;		   //�c��̔R��

public:
	//---�R���X�g���N�^---//
	Car(std::string n, int w, int l, int h, double f)
	{
		name = n;
		width = w;
		length = l;
		height = h;
		fuel_level = f;
		xp = yp = 0.0;
	}

	double x() { return xp; } //���݈ʒu��X���W��Ԃ�
	double y() { return yp; } //���݈ʒu��Y���W��Ԃ�

	double fuel() { return fuel_level; } //�c��̔R����Ԃ�

	void print_spec() //�X�y�b�N��\��
	{
		std::cout << "�Ԗ� : " << name << '\n';
		std::cout << "�ԕ� : " << width << "mm\n";
		std::cout << "�Ԓ� : " << length << "mm\n";
		std::cout << "�ԍ� : " << height << "mm\n";
	}

	bool move(double dx, double dy) //X������dx�EY������dy�ړ�
	{
		double dist = sqrt(dx * dx + dy * dy); //�ړ�����

		if (dist > fuel_level)
		{
			return false; //�R���s��
		}
		else
		{
			fuel_level -= dist; //�ړ������̕������R��������
			xp += dx;
			yp += dy;

			return true;
		}
	}
};