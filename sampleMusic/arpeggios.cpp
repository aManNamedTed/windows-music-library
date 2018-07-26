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
  cn3(eighth); en3(eighth); gn3(eighth);
  cn4(eighth); en4(eighth); gn4(eighth);
  cn5(eighth); en5(eighth); gn5(eighth);
  cn6(half);

  return 0;
}
