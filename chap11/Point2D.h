#ifndef ___Point2D
#define ___Point2D

//---�Q�������W�N���X---//
class Point2D
{
	int xp, yp; //X���W��Y���W

public:
	Point2D(int x = 0, int y = 0) : xp(x), yp(y)
	{
	}

	int x() const { return xp; }									   //X���W
	int y() const { return yp; }									   //Y���W
	void print() const { std::cout << "(" << xp << "," << yp << ")"; } //�\��
};

#endif