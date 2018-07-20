#include "winmuslib.h"

int main()
{
	double q = 300;
	double h = 600;
	double dh = 900;

	// 1st measure
	b4(q); a4(q); g4(q); a4(q);

	// 2nd measure
	b4(q); b4(q); b4(h);
	
	// 3rd measure
	a4(q); a4(q); a4(h);
	
	// 4th measure
	b4(q); d5(q); d5(h);

	// 5th measure
	b4(q); a4(q); g4(q); a4(q);

	// 6th measure
	b4(q); b4(q); b4(q); b4(q);
	
	// 7th measure
	a4(q); a4(q); b4(q); a4(q);

	// 8th measure
	g4(dh);
	
	return 0;
}
