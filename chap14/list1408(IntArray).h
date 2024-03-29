//®zñNXIntArrayiæSÅFwb_j

#ifndef ___Class_IntArray
#define ___Class_IntArray

//=====®zñNX=====//
class IntArray
{
	int nelem; //zñÌvf
	int *vec;  //æªvfÖÌ|C^

public:
	//-----YÍÍG[-----//
	class IdxRngErr //üêqNX
	{
	private:
		const IntArray *ident;
		int idx;

	public:
		IdxRngErr(const IntArray *p, int i) : ident(p), idx(i) {}
		int index() const { return idx; }
	};

	//---¾¦IRXgN^yè`z---//
	explicit IntArray(int size) : nelem(size) { vec = new int[nelem]; }

	//---Rs[RXgN^yé¾z---//
	IntArray(const IntArray &x);

	//---fXgN^yè`z---//
	~IntArray() { delete[] vec; }

	//---vfðÔ·---//
	int size() const { return nelem; }

	//---ãüZq=yé¾z---//
	IntArray &operator=(const IntArray &x);

	//---YZq[]yè`z---//
	int &operator[](int i)
	{
		if (i < 0 || i >= nelem)
		{
			throw IdxRngErr(this, i); //YÍÍG[o
		}

		return vec[i];
	}

	//---constÅYZq[]yè`z---//
	const int &operator[](int i) const
	{
		if (i < 0 || i >= nelem)
		{
			throw IdxRngErr(this, i); //YÍÍG[o
		}

		return vec[i];
	}
};

#endif