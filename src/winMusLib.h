#ifndef WINMUSLIB_H 
#define WINMUSLIB_H

// rst = Rest - use this as a rest within songs (length is in milliseconds)
void rst(double length);

// Cn - includes Cn0 to Cn8 (length is in milliseconds)
void cn0(double length); void cn1(double length); void cn2(double length);
void cn3(double length); void cn4(double length); void cn5(double length);
void cn6(double length); void cn7(double length); void cn8(double length);

// C# - includes C#0 to C#8 (length is in milliseconds)
void cs0(double length); void cs1(double length); void cs2(double length);
void cs3(double length); void cs4(double length); void cs5(double length);
void cs6(double length); void cs7(double length); void cs8(double length);

// Db - includes Db0 to Db8 (length is in milliseconds)
#define db0(double) cs5(double)
#define db1(double) cs5(double)
#define db2(double) cs5(double)
#define db3(double) cs5(double)
#define db4(double) cs5(double)
#define db5(double) cs5(double)
#define db6(double) cs5(double)
#define db7(double) cs5(double)
#define db8(double) cs5(double)

// Dn - includes Dn0 to Dn8 (length is in milliseconds)
void dn0(double length); void dn1(double length); void dn2(double length);
void dn3(double length); void dn4(double length); void dn5(double length);
void dn6(double length); void dn7(double length); void dn8(double length);

// D# - includes D#0 to D#8 (length is in milliseconds)
void ds0(double length); void ds1(double length); void ds2(double length);
void ds3(double length); void ds4(double length); void ds5(double length);
void ds6(double length); void ds7(double length); void ds8(double length);

// Eb - includes Eb0 to Eb8 (length is in milliseconds)
#define eb0(double) ds0(double)
#define eb1(double) ds1(double)
#define eb2(double) ds2(double)
#define eb3(double) ds3(double)
#define eb4(double) ds4(double)
#define eb5(double) ds5(double)
#define eb6(double) ds6(double)
#define eb7(double) ds7(double)
#define eb8(double) ds8(double)

// En - includes En0 to En8 (length is in milliseconds)
void en0(double length); void en1(double length); void en2(double length);
void en3(double length); void en4(double length); void en5(double length);
void en6(double length); void en7(double length); void en8(double length);

// Fn - includes Fn0 to Fn8 (length is in milliseconds)
void fn0(double length); void fn1(double length); void fn2(double length);
void fn3(double length); void fn4(double length); void fn5(double length);
void fn6(double length); void fn7(double length); void fn8(double length);

// F# - includes F#0 to F#8 (length is in milliseconds)
void fs0(double length); void fs1(double length); void fs2(double length);
void fs3(double length); void fs4(double length); void fs5(double length);
void fs6(double length); void fs7(double length); void fs8(double length);

// Gb - includes Gb0 to Gb8 (length is in milliseconds)
#define gb0(double) fs0(double)
#define gb1(double) fs1(double)
#define gb2(double) fs2(double)
#define gb3(double) fs3(double)
#define gb4(double) fs4(double)
#define gb5(double) fs5(double)
#define gb6(double) fs6(double)
#define gb7(double) fs7(double)
#define gb8(double) fs8(double)

// Gn - includes Gn0 to Gn8 (length is in milliseconds)
void gn0(double length); void gn1(double length); void gn2(double length);
void gn3(double length); void gn4(double length); void gn5(double length);
void gn6(double length); void gn7(double length); void gn8(double length);

// G# - includes G#0 to G#8 (length is in milliseconds)
void gs0(double length); void gs1(double length); void gs2(double length);
void gs3(double length); void gs4(double length); void gs5(double length);
void gs6(double length); void gs7(double length); void gs8(double length);

// Ab - includes Ab0 to Ab8 (length is in milliseconds)
#define ab0(double) gs0(double)
#define ab1(double) gs1(double)
#define ab2(double) gs2(double)
#define ab3(double) gs3(double)
#define ab4(double) gs4(double)
#define ab5(double) gs5(double)
#define ab6(double) gs6(double)
#define ab7(double) gs7(double)
#define ab8(double) gs8(double)

// An - includes An0  to An8 (length is in milliseconds)
void an0(double length); void an1(double length); void an2(double length);
void an3(double length); void an4(double length); void an5(double length);
void an6(double length); void an7(double length); void an8(double length);

// A# - includes A#0 to A#8 (length is in milliseconds)
void as0(double length); void as1(double length); void as2(double length);
void as3(double length); void as4(double length); void as5(double length);
void as6(double length); void as7(double length); void as8(double length);

// Bb - includes Bb0 to Bb8 (length is in milliseconds)
#define bb0(double) as0(double)
#define bb1(double) as1(double)
#define bb2(double) as2(double)
#define bb3(double) as3(double)
#define bb4(double) as4(double)
#define bb5(double) as5(double)
#define bb6(double) as6(double)
#define bb7(double) as7(double)
#define bb8(double) as8(double)

// Bn - includes Bn0 to Bn8 (length is in milliseconds)
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
