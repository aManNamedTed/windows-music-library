// remember to add #include "../src/winmuslib.h" 
// at the top of your music files for them to work!

#include "../src/winmuslib.h"

int main()
{
  // initializing note duration variables
  double quarter   = 0; double dottedQuarter = 0; 
  double whole     = 0; double dottedHalf    = 0; 
  double half      = 0; double eighth        = 0; 
  double sixteenth = 0;

  // change beatsPerMinute to how many bpm you want your song to have
  // example: double beatsPerMinute = 200; [my favorite bpm for this library]
  double beatsPerMinute = 200; 

  // this sets your note durations based on how many bpm you select
  setNoteDurations(beatsPerMinute, quarter, dottedQuarter, whole, \
                   dottedHalf,     half,    eighth,        sixteenth);

  // 1st measure
  c4(quarter); c4(quarter); c4(quarter); g3(quarter);

  // 2nd measure
  a3(quarter); a3(quarter); g3(half);

  // 3rd measure
  e4(quarter); e4(quarter); d4(quarter); d4(quarter);

  // 4th measure
  c4(dottedHalf); g4(quarter);

  // 5th measure
  c5(quarter); c5(quarter); c5(quarter); g4(quarter);
  
  // 6th measure
  a4(quarter); a4(quarter); g4(half);
  
  // 7th measure
  e5(quarter); e5(quarter); d5(quarter); d5(quarter);
  
  // 8th measure
  c5(dottedHalf);
  return 0;
}
