#ifndef WINMUSLIB_H 
#define WINMUSLIB_H

// rst = Rest - use this as a rest within songs (length is in milliseconds)
void rst(double length);

//       Cn - includes Cn0 to Cn8 (length is in milliseconds)
void cn0(double length); void cn1(double length); void cn2(double length);
void cn3(double length); void cn4(double length); void cn5(double length);
void cn6(double length); void cn7(double length); void cn8(double length);

// C# or Db - includes C#0 to C#8 or Db0 to Db8 (length is in milliseconds)
void cs0(double length); void cs1(double length); void cs2(double length);
void cs3(double length); void cs4(double length); void cs5(double length);
void cs6(double length); void cs7(double length); void cs8(double length);

//       Dn - includes Dn0  to Dn8 (length is in milliseconds)
void dn0(double length); void dn1(double length); void dn2(double length);
void dn3(double length); void dn4(double length); void dn5(double length);
void dn6(double length); void dn7(double length); void dn8(double length);

// D# or Eb - includes D#0 to D#8 or Eb0 to Eb8 (length is in milliseconds)
void ds0(double length); void ds1(double length); void ds2(double length);
void ds3(double length); void ds4(double length); void ds5(double length);
void ds6(double length); void ds7(double length); void ds8(double length);

//       En - includes En0 to En8 (length is in milliseconds)
void en0(double length); void en1(double length); void en2(double length);
void en3(double length); void en4(double length); void en5(double length);
void en6(double length); void en7(double length); void en8(double length);

//       Fn - includes Fn0 to Fn8 (length is in milliseconds)
void fn0(double length); void fn1(double length); void fn2(double length);
void fn3(double length); void fn4(double length); void fn5(double length);
void fn6(double length); void fn7(double length); void fn8(double length);

// F# or Gb - includes F#0 to F#8 or Gb0 to Gb8 (length is in milliseconds)
void fs0(double length); void fs1(double length); void fs2(double length);
void fs3(double length); void fs4(double length); void fs5(double length);
void fs6(double length); void fs7(double length); void fs8(double length);

//       Gn - includes Gn0 to Gn8 (length is in milliseconds)
void gn0(double length); void gn1(double length); void gn2(double length);
void gn3(double length); void gn4(double length); void gn5(double length);
void gn6(double length); void gn7(double length); void gn8(double length);

// G# or Ab - includes G#0 to G#8 or Ab0 to Ab8 (length is in milliseconds)
void gs0(double length); void gs1(double length); void gs2(double length);
void gs3(double length); void gs4(double length); void gs5(double length);
void gs6(double length); void gs7(double length); void gs8(double length);

//       An - includes An0  to An8 (length is in milliseconds)
void an0(double length); void an1(double length); void an2(double length);
void an3(double length); void an4(double length); void an5(double length);
void an6(double length); void an7(double length); void an8(double length);

// A# or Bb - includes A#0 to A#8 or Bb0 to Bb8 (length is in milliseconds)
void as0(double length); void as1(double length); void as2(double length);
void as3(double length); void as4(double length); void as5(double length);
void as6(double length); void as7(double length); void as8(double length);

//       Bn - includes Bn0 to Bn8 (length is in milliseconds)
void bn0(double length); void bn1(double length); void bn2(double length);
void bn3(double length); void bn4(double length); void bn5(double length);
void bn6(double length); void bn7(double length); void bn8(double length);

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
