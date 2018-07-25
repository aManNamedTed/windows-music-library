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
  double beatsPerMinute = 180; 

  // this sets your note durations based on how many bpm you select
  setNoteDurations(beatsPerMinute, quarter, dottedQuarter, whole, \
                   dottedHalf,     half,    eighth,        sixteenth);

  // FFXIV OST Saint Mocianne's Arboretum Theme (Poison Ivy)
  f4(whole); ds4(whole); d4(half); c4(half); d4(half); f3(dottedHalf);
  rst(half);
  f4(whole); ds4(whole); d4(half); c4(half); d4(half); f3(dottedHalf);
  fs4(whole); e4(whole); ds4(half); cs4(half); ds4(half); fs3(dottedHalf);
  fs3(quarter); gs3(quarter); a3(dottedHalf); cs4(quarter); e4(dottedQuarter);
  d4(dottedQuarter); gs3(quarter); cs4(dottedHalf);
  ds4(half); gs4(whole);

  return 0;
}
