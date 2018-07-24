// This library is only available for Windows machines!
#include <windows.h> 

//			 C  - includes C0 to C8 (length is in milliseconds)
void c0(double length)  { Beep(16.35,   length); }
void c1(double length)  { Beep(32.70,   length); }
void c2(double length)  { Beep(65.41,   length); }
void c3(double length)  { Beep(130.81,  length); }
void c4(double length)  { Beep(261.63,  length); }
void c5(double length)  { Beep(523.25,  length); }
void c6(double length)  { Beep(1046.50, length); } 
void c7(double length)  { Beep(2093.00, length); }
void c8(double length)  { Beep(4186.01, length); }

// C# or Db - includes C#0 to C#8 or Db0 to Db8 (length is in milliseconds)
void cs0(double length) { Beep(17.32,   length); }
void cs1(double length) { Beep(34.65,   length); }
void cs2(double length) { Beep(69.30,   length); }
void cs3(double length) { Beep(138.59,  length); }
void cs4(double length) { Beep(277.18,  length); }
void cs5(double length) { Beep(554.37,  length); }
void cs6(double length) { Beep(1108.73, length); }
void cs7(double length) { Beep(2217.46, length); }
void cs8(double length) { Beep(4434.92, length); }

//			 D  - includes D0 to D8 (length is in milliseconds)
void d0(double length)  { Beep(18.35, 	length); }
void d1(double length)  { Beep(36.71,	  length); }
void d2(double length)  { Beep(73.42,   length); }
void d3(double length)  { Beep(146.83,  length); }
void d4(double length)  { Beep(293.66,  length); }
void d5(double length)  { Beep(587.33,  length); }
void d6(double length)  { Beep(1174.66, length); }
void d7(double length)  { Beep(2349.32, length); }
void d8(double length)  { Beep(4698.63, length); }

// D# or Eb - includes D#0 to D#8 or Eb0 to Eb8 (length is in milliseconds)
void ds0(double length) { Beep(19.45,	  length); }
void ds1(double length) { Beep(38.89,	  length); }
void ds2(double length) { Beep(77.78,   length); }
void ds3(double length) { Beep(155.56,  length); }
void ds4(double length) { Beep(311.13,  length); }
void ds5(double length) { Beep(622.25,  length); }
void ds6(double length) { Beep(1244.51, length); }
void ds7(double length) { Beep(2489.02, length); }
void ds8(double length) { Beep(4978.03, length); }

//			 E  - includes E0 to E8 (length is in milliseconds)
void e0(double length)  { Beep(20.60,	  length); }
void e1(double length)  { Beep(41.20,	  length); }
void e2(double length)  { Beep(82.41,	  length); }
void e3(double length)  { Beep(164.81,  length); }
void e4(double length)  { Beep(329.63,  length); }
void e5(double length)  { Beep(659.25,  length); }
void e6(double length)  { Beep(1318.51, length); }
void e7(double length)  { Beep(2637.02, length); }
void e8(double length)  { Beep(5274.04, length); }

//			 F  - includes F0 to F8 (length is in milliseconds)
void f0(double length)  { Beep(21.83,	  length); }
void f1(double length)  { Beep(43.65,	  length); }
void f2(double length)  { Beep(78.31,	  length); }
void f3(double length)  { Beep(174.61,  length); }
void f4(double length)  { Beep(349.23,  length); }
void f5(double length)  { Beep(698.46,  length); }
void f6(double length)  { Beep(1396.91, length); }
void f7(double length)  { Beep(2793.83, length); }
void f8(double length)  { Beep(5587.65, length); }

// F# or Gb - includes F#0 to F#8 or Gb0 to Gb8 (length is in milliseconds)
void fs0(double length) { Beep(23.12,	  length); }
void fs1(double length) { Beep(46.25,	  length); }
void fs2(double length) { Beep(92.50,	  length); }
void fs3(double length) { Beep(185.00,  length); }
void fs4(double length) { Beep(369.99,  length); }
void fs5(double length) { Beep(739.99,  length); }
void fs6(double length) { Beep(1479.98, length); }
void fs7(double length) { Beep(2959.96, length); }
void fs8(double length) { Beep(5919.91, length); }

//			 G  - includes G0 to G8 (length is in milliseconds)
void g0(double length)  { Beep(24.50,	  length); }
void g1(double length)  { Beep(49.00,	  length); }
void g2(double length)  { Beep(98.00,	  length); }
void g3(double length)  { Beep(196.00,  length); }
void g4(double length)  { Beep(392.00,  length); }
void g5(double length)  { Beep(783.99,  length); }
void g6(double length)  { Beep(1567.98, length); }
void g7(double length)  { Beep(3135.96, length); }
void g8(double length)  { Beep(6271.93, length); }

// G# or Ab - includes G#0 to G#8 or Ab0 to Ab8 (length is in milliseconds)
void gs0(double length) { Beep(25.96,	  length); }
void gs1(double length) { Beep(51.91,	  length); }
void gs2(double length) { Beep(103.83,  length); }
void gs3(double length) { Beep(207.65,  length); }
void gs4(double length) { Beep(415.30,  length); }
void gs5(double length) { Beep(830.61,  length); }
void gs6(double length) { Beep(1661.22, length); }
void gs7(double length) { Beep(3322.44, length); }
void gs8(double length) { Beep(6644.88, length); }

//			 A  - includes A0 to A8 (length is in milliseconds)
void a0(double length)  { Beep(27.50,	  length); }
void a1(double length)  { Beep(55.00,	  length); }
void a2(double length)  { Beep(110.00,  length); }
void a3(double length)  { Beep(220.00,  length); }
void a4(double length)  { Beep(440.00,	length); }
void a5(double length)  { Beep(880.00,	length); }
void a6(double length)  { Beep(1760.00, length); }
void a7(double length)  { Beep(3520.00, length); }
void a8(double length)  { Beep(7040.00, length); }

// A# or Bb - includes A#0 to A#8 or Bb0 to Bb8 (length is in milliseconds)
void as0(double length) { Beep(29.14,   length); }
void as1(double length) { Beep(58.27,   length); }
void as2(double length) { Beep(116.54,  length); }
void as3(double length) { Beep(233.08,  length); }
void as4(double length) { Beep(466.16,  length); } 
void as5(double length) { Beep(932.33,  length); } 
void as6(double length) { Beep(1864.66, length); }
void as7(double length) { Beep(3729.31, length); }
void as8(double length) { Beep(7458.62, length); }

//			 B  - includes B0 to B8 (length is in milliseconds)
void b0(double length)  { Beep(30.87,	  length); }
void b1(double length)  { Beep(61.74,	  length); }
void b2(double length)  { Beep(123.47,  length); }
void b3(double length)  { Beep(246.94,  length); }
void b4(double length)  { Beep(493.88,  length); }
void b5(double length)  { Beep(987.77,  length); }
void b6(double length)  { Beep(1975.53, length); }
void b7(double length)  { Beep(3951.07, length); }
void b8(double length)  { Beep(7902.13, length); }
