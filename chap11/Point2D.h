#ifndef ___Point2D
#define ___Point2D

//---２次元座標クラス---//
class Point2D
{
	int xp, yp; //X座標とY座標

public:
	Point2D(int x = 0, int y = 0) : xp(x), yp(y)
	{
	}

	int x() const { return xp; }									   //X座標
	int y() const { return yp; }									   //Y座標
	void print() const { std::cout << "(" << xp << "," << yp << ")"; } //表示
};

#endif