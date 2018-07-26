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
  bn4(quarter); an4(quarter); gn4(quarter); an4(quarter);

  // 2nd measure
  bn4(quarter); bn4(quarter); bn4(half);
  
  // 3rd measure
  an4(quarter); an4(quarter); an4(half);
  
  // 4thalf measure
  bn4(quarter); dn5(quarter); dn5(half);

  // 5th measure
  bn4(quarter); an4(quarter); gn4(quarter); an4(quarter);

  // 6th measure
  bn4(quarter); bn4(quarter); bn4(quarter); bn4(quarter);
  
  // 7th measure
  an4(quarter); an4(quarter); bn4(quarter); an4(quarter);

  // 8th measure
  gn4(dottedHalf);

  return 0;
}
