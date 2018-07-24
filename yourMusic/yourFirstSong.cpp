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
  double beatsPerMinute = 0; 

  // this sets your note durations based on how many bpm you select
  setNoteDurations(beatsPerMinute, quarter, dottedQuarter, whole, \
                   dottedHalf,     half,    eighth,        sixteenth);


  /* Write your notes outside of this comment! example: 
   *
   * c3(300);
   *
   * remember the duration (300) is in milliseconds.
   *
   * Also remember that there is no overlapping of beeps, so melodies only. 
   * (unless you have multiple Windows machines haha)
   * 
   * Finally, remember that notes in the 0 range and 8 range may not be
   * heard due to either the nature of your physiology (inability to hear
   * certain frequencies), or hardware constraints.
   */
   
  return 0;
}
