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

  //ascending C major arpeggio
  c3(eighth); e3(eighth); g3(eighth);

  c4(eighth); e4(eighth); g4(eighth);

  c5(eighth); e5(eighth); g5(eighth);

  c6(half);

  return 0;
}
