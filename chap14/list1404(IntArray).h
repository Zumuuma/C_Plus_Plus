//®zñNXIntArrayiæRÅFwb_j

#ifndef ___Class_IntArray
#define ___Class_IntArray

//=====®zñNX=====//
class IntArray
{
	int nelem; //zñÌvf
	int *vec;  //æªvfÖÌ|C^

public:
	//---¾¦IRXgN^---//
	explicit IntArray(int size) : nelem(size) { vec = new int[nelem]; }
	//---Rs[RXgN^yé¾z---//
	IntArray(const IntArray &x);
	//---fXgN^yè`z---//
	~IntArray() { delete[] vec; }
	//---vfðÔ·---//
	int size() const { return nelem; }
	//---ãüZq=yè`z---//
	IntArray &operator=(const IntArray &x);
	//---YZq[]yè`z---//
	int &operator[](int i) { return vec[i]; }
	//---constÅYZq[]yè`z---//
	const int &operator[](int i) const { return vec[i]; }
};

#endif