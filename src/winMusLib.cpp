// This library is only available for Windows machines!
#include <windows.h> 

// rst = Rest - use this as a rest within songs (length is in milliseconds)
void rst(double length) { Beep(000.000, length); }

//			   Cn - includes Cn0 to Cn8 (length is in milliseconds)
void cn0(double length) { Beep(16.3500, length); }
void cn1(double length) { Beep(32.7000, length); }
void cn2(double length) { Beep(65.4100, length); }
void cn3(double length) { Beep(130.810, length); }
void cn4(double length) { Beep(261.630, length); }
void cn5(double length) { Beep(523.250, length); }
void cn6(double length) { Beep(1046.50, length); } 
void cn7(double length) { Beep(2093.00, length); }
void cn8(double length) { Beep(4186.01, length); }

//   C# or Db - includes C#0 to C#8 or Db0 to Db8 (length is in milliseconds)
void cs0(double length) { Beep(17.3200, length); }
void cs1(double length) { Beep(34.6500, length); }
void cs2(double length) { Beep(69.3000, length); }
void cs3(double length) { Beep(138.590, length); }
void cs4(double length) { Beep(277.180, length); }
void cs5(double length) { Beep(554.370, length); }
void cs6(double length) { Beep(1108.73, length); }
void cs7(double length) { Beep(2217.46, length); }
void cs8(double length) { Beep(4434.92, length); }

//         Dn - includes Dn0 to Dn8 (length is in milliseconds)
void dn0(double length) { Beep(18.3500, length); }
void dn1(double length) { Beep(36.7100, length); }
void dn2(double length) { Beep(73.4200, length); }
void dn3(double length) { Beep(146.830, length); }
void dn4(double length) { Beep(293.660, length); }
void dn5(double length) { Beep(587.330, length); }
void dn6(double length) { Beep(1174.66, length); }
void dn7(double length) { Beep(2349.32, length); }
void dn8(double length) { Beep(4698.63, length); }

//   D# or Eb - includes D#0 to D#8 or Eb0 to Eb8 (length is in milliseconds)
void ds0(double length) { Beep(19.4500, length); }
void ds1(double length) { Beep(38.8900, length); }
void ds2(double length) { Beep(77.7800, length); }
void ds3(double length) { Beep(155.560, length); }
void ds4(double length) { Beep(311.130, length); }
void ds5(double length) { Beep(622.250, length); }
void ds6(double length) { Beep(1244.51, length); }
void ds7(double length) { Beep(2489.02, length); }
void ds8(double length) { Beep(4978.03, length); }

//         En - includes En0 to En8 (length is in milliseconds)
void en0(double length) { Beep(20.6000, length); }
void en1(double length) { Beep(41.2000, length); }
void en2(double length) { Beep(82.4100, length); }
void en3(double length) { Beep(164.810, length); }
void en4(double length) { Beep(329.630, length); }
void en5(double length) { Beep(659.250, length); }
void en6(double length) { Beep(1318.51, length); }
void en7(double length) { Beep(2637.02, length); }
void en8(double length) { Beep(5274.04, length); }

//			   Fn - includes Fn0 to Fn8 (length is in milliseconds)
void fn0(double length) { Beep(21.8300, length); }
void fn1(double length) { Beep(43.6500, length); }
void fn2(double length) { Beep(78.3100, length); }
void fn3(double length) { Beep(174.610, length); }
void fn4(double length) { Beep(349.230, length); }
void fn5(double length) { Beep(698.460, length); }
void fn6(double length) { Beep(1396.91, length); }
void fn7(double length) { Beep(2793.83, length); }
void fn8(double length) { Beep(5587.65, length); }

//   F# or Gb - includes F#0 to F#8 or Gb0 to Gb8 (length is in milliseconds)
void fs0(double length) { Beep(23.1200, length); }
void fs1(double length) { Beep(46.2500, length); }
void fs2(double length) { Beep(92.5000, length); }
void fs3(double length) { Beep(185.000, length); }
void fs4(double length) { Beep(369.990, length); }
void fs5(double length) { Beep(739.990, length); }
void fs6(double length) { Beep(1479.98, length); }
void fs7(double length) { Beep(2959.96, length); }
void fs8(double length) { Beep(5919.91, length); }

//			   Gn - includes Gn0 to Gn8 (length is in milliseconds)
void gn0(double length) { Beep(24.5000, length); }
void gn1(double length) { Beep(49.0000, length); }
void gn2(double length) { Beep(98.0000, length); }
void gn3(double length) { Beep(196.000, length); }
void gn4(double length) { Beep(392.000, length); }
void gn5(double length) { Beep(783.990, length); }
void gn6(double length) { Beep(1567.98, length); }
void gn7(double length) { Beep(3135.96, length); }
void gn8(double length) { Beep(6271.93, length); }

//   G# or Ab - includes G#0 to G#8 or Ab0 to Ab8 (length is in milliseconds)
void gs0(double length) { Beep(25.9600, length); }
void gs1(double length) { Beep(51.9100, length); }
void gs2(double length) { Beep(103.830, length); }
void gs3(double length) { Beep(207.650, length); }
void gs4(double length) { Beep(415.300, length); }
void gs5(double length) { Beep(830.610, length); }
void gs6(double length) { Beep(1661.22, length); }
void gs7(double length) { Beep(3322.44, length); }
void gs8(double length) { Beep(6644.88, length); }

//			   An - includes An0 to An8 (length is in milliseconds)
void an0(double length) { Beep(27.5000, length); }
void an1(double length) { Beep(55.0000, length); }
void an2(double length) { Beep(110.000, length); }
void an3(double length) { Beep(220.000, length); }
void an4(double length) { Beep(440.000,	length); }
void an5(double length) { Beep(880.000,	length); }
void an6(double length) { Beep(1760.00, length); }
void an7(double length) { Beep(3520.00, length); }
void an8(double length) { Beep(7040.00, length); }

//   A# or Bb - includes A#0 to A#8 or Bb0 to Bb8 (length is in milliseconds)
void as0(double length) { Beep(29.1400, length); }
void as1(double length) { Beep(58.2700, length); }
void as2(double length) { Beep(116.540, length); }
void as3(double length) { Beep(233.080, length); }
void as4(double length) { Beep(466.160, length); } 
void as5(double length) { Beep(932.330, length); } 
void as6(double length) { Beep(1864.66, length); }
void as7(double length) { Beep(3729.31, length); }
void as8(double length) { Beep(7458.62, length); }

//			   Bn - includes Bn0 to Bn8 (length is in milliseconds)
void bn0(double length) { Beep(30.8700, length); }
void bn1(double length) { Beep(61.7400, length); }
void bn2(double length) { Beep(123.470, length); }
void bn3(double length) { Beep(246.940, length); }
void bn4(double length) { Beep(493.880, length); }
void bn5(double length) { Beep(987.770, length); }
void bn6(double length) { Beep(1975.53, length); }
void bn7(double length) { Beep(3951.07, length); }
void bn8(double length) { Beep(7902.13, length); }

double setDottedQuarter(double quarterNote)
{
  const static double DOTTED_QUARTER_MODIFIER = 1.5;
  return DOTTED_QUARTER_MODIFIER * quarterNote;
}

double setWhole(double quarterNote)
{
  const static double WHOLE_MODIFIER = 4;
  return WHOLE_MODIFIER * quarterNote;
}

double setDottedHalf(double quarterNote)
{
  const static double DOTTED_HALF_MODIFIER = 3;
  return DOTTED_HALF_MODIFIER * quarterNote;
}

double setHalf(double quarterNote)
{
  const static double HALF_MODIFIER = 2;
  return HALF_MODIFIER * quarterNote;
}

double setEighth(double quarterNote)
{
  const static double EIGHTH_MODIFIER = 0.5;
  return EIGHTH_MODIFIER * quarterNote;
}

double setSixteenth(double quarterNote)
{
  const static double SIXTEENTH_MODIFIER = 0.25;
  return SIXTEENTH_MODIFIER * quarterNote;
}

// Given beats per minute, set values for various note durations
void setNoteDurations(double beatsPerMinute, double &quarter,  \
                      double &dottedQuarter, double &whole,    \
                      double &dottedHalf,    double &half,     \
                      double &eighth,        double &sixteenth)
{
  // Assuming four beats per measure, and one beat is one quarter note,
  // one quarter note is equal to one minute divided by the beats per minute.
	const static double MINUTE_IN_MILLISECONDS = 60000;
	quarter = MINUTE_IN_MILLISECONDS / beatsPerMinute;

  // Leaving function names in this order because of format of reference;
  // ../img/note_duration_to_millisecond.png
	dottedQuarter = setDottedQuarter(quarter);
	whole = setWhole(quarter);
	dottedHalf = setDottedHalf(quarter);
	half = setHalf(quarter);
	eighth = setEighth(quarter);
	sixteenth = setSixteenth(quarter);
}

