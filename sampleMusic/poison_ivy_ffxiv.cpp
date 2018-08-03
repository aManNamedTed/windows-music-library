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
  fn4(whole); ds4(whole); dn4(half); cn4(half); dn4(half); fn3(dottedHalf);
  rst(half);
  fn4(whole); ds4(whole); dn4(half); cn4(half); dn4(half); gn4(dottedHalf);
  fs4(whole); en4(whole); ds4(half); cs4(half); ds4(half); fs3(dottedHalf);
  fs3(quarter); gs3(quarter); an3(dottedHalf); cs4(quarter); en4(dottedQuarter);
  dn4(dottedQuarter); gs3(quarter); cs4(dottedHalf);
  ds4(half); gs4(whole);

  return 0;
}
