#include "../src/winmuslib.h"

int main()
{
	// these measurements are for 200bpm according to the reference in img/

	double q = 300;  // quarter note
	double h = 600;  // half note
	double dh = 900; // dotted half note

	// 1st measure
	c4(q); c4(q); c4(q); g3(q);

	// 2nd measure
	a3(q); a3(q); g3(h);

	// 3rd measure
	e4(q); e4(q); d4(q); d4(q);

	// 4th measure
	c4(dh); g4(q);

	// 5th measure
	c5(q); c5(q); c5(q); g4(q);
	
	// 6th measure
	a4(q); a4(q); g4(h);
	
	// 7th measure
	e5(q); e5(q); d5(q); d5(q);
	
	// 8th measure
	c5(dh);
	
	return 0;
}
