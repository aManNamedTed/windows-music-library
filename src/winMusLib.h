#ifndef WINMUSLIB_H 
#define WINMUSLIB_H

//       C  - includes C0  to C8 (length is in milliseconds)
void c0(double length); void c1(double length); void c2(double length);
void c3(double length); void c4(double length); void c5(double length);
void c6(double length); void c7(double length); void c8(double length);

// C# or Db - includes C#0 to C#8 or Db0 to Db8 (length is in milliseconds)
void cs0(double length); void cs1(double length); void cs2(double length);
void cs3(double length); void cs4(double length); void cs5(double length);
void cs6(double length); void cs7(double length); void cs8(double length);

//       D  - includes D0  to D8 (length is in milliseconds)
void d0(double length); void d1(double length); void d2(double length);
void d3(double length); void d4(double length); void d5(double length);
void d6(double length); void d7(double length); void d8(double length);

// D# or Eb - includes D#0 to D#8 or Eb0 to Eb8 (length is in milliseconds)
void ds0(double length); void ds1(double length); void ds2(double length);
void ds3(double length); void ds4(double length); void ds5(double length);
void ds6(double length); void ds7(double length); void ds8(double length);

//       E  - includes E0  to E8 (length is in milliseconds)
void e0(double length); void e1(double length); void e2(double length);
void e3(double length); void e4(double length); void e5(double length);
void e6(double length); void e7(double length); void e8(double length);

//       F  - includes F0  to F8 (length is in milliseconds)
void f0(double length); void f1(double length); void f2(double length);
void f3(double length); void f4(double length); void f5(double length);
void f6(double length); void f7(double length); void f8(double length);

// F# or Gb - includes F#0 to F#8 or Gb0 to Gb8 (length is in milliseconds)
void fs0(double length); void fs1(double length); void fs2(double length);
void fs3(double length); void fs4(double length); void fs5(double length);
void fs6(double length); void fs7(double length); void fs8(double length);

//       G  - includes G0  to G8 (length is in milliseconds)
void g0(double length); void g1(double length); void g2(double length);
void g3(double length); void g4(double length); void g5(double length);
void g6(double length); void g7(double length); void g8(double length);

// G# or Ab - includes G#0 to G#8 or Ab0 to Ab8 (length is in milliseconds)
void gs0(double length); void gs1(double length); void gs2(double length);
void gs3(double length); void gs4(double length); void gs5(double length);
void gs6(double length); void gs7(double length); void gs8(double length);

//       A  - includes A0  to A8 (length is in milliseconds)
void a0(double length); void a1(double length); void a2(double length);
void a3(double length); void a4(double length); void a5(double length);
void a6(double length); void a7(double length); void a8(double length);

// A# or Bb - includes A#0 to A#8 or Bb0 to Bb8 (length is in milliseconds)
void as0(double length); void as1(double length); void as2(double length);
void as3(double length); void as4(double length); void as5(double length);
void as6(double length); void as7(double length); void as8(double length);

//       B  - includes B0  to B8 (length is in milliseconds)
void b0(double length); void b1(double length); void b2(double length);
void b3(double length); void b4(double length); void b5(double length);
void b6(double length); void b7(double length); void b8(double length);

// Given beats per minute, set values for various note durations
void setNoteDurations(double beatsPerMinute, double &quarter,  \
                      double &dottedQuarter, double &whole,    \
                      double &dottedHalf,    double &half,     \
                      double &eighth,        double &sixteenth);

// Leaving function names in this order because this is the order they appear 
// in, in the reference ../img/note_duration_to_millisecond.png
double setDottedQuarter(double quarterNote);
double setWhole(double quarterNote);
double setDottedHalf(double quarterNote);
double setHalf(double quarterNote);
double setEighth(double quarterNote);
double setSixteenth(double quarterNote);

#endif
