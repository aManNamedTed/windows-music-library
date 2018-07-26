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
  cn4(quarter); cn4(quarter); cn4(quarter); gn3(quarter);

  // 2nd measure
  an3(quarter); an3(quarter); gn3(half);

  // 3rd measure
  en4(quarter); en4(quarter); dn4(quarter); dn4(quarter);

  // 4th measure
  cn4(dottedHalf); gn4(quarter);

  // 5th measure
  cn5(quarter); cn5(quarter); cn5(quarter); gn4(quarter);
  
  // 6th measure
  an4(quarter); an4(quarter); gn4(half);
  
  // 7th measure
  en5(quarter); en5(quarter); dn5(quarter); dn5(quarter);
  
  // 8th measure
  cn5(dottedHalf);
  return 0;
}
