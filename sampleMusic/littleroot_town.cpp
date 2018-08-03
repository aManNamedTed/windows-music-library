// remember to add #include "../src/winmuslib.h"
// at the top of your music files for them to work!

#include "../src/winmuslib.h"

int main()
{
  // initializing note duration variables
  double q = 0; double dq = 0;
  double w = 0; double dh = 0;
  double h = 0; double e  = 0;
  double s = 0;

  // change beatsPerMinute to how many bpm you want your song to have
  // example: double beatsPerMinute = 200; [my favorite bpm for this library]
  double beatsPerMinute = 235;

  // this sets your note durations based on how many bpm you select
  setNoteDurations(beatsPerMinute, q, dq, w, dh, h, e, s);

  cn4(q); fn4(q); gn4(q); an4(dh);
  gn4(q); an4(q); gn4(q); an4(q); as4(q); cn5(dh);
  dn5(q); an4(q); rst(q);
  an4(q); cs5(q); dn5(h); en5(h); dn5(h);
  an4(q); gn4(q); fn4(q); en4(q); fn4(q); an4(q); dn5(dh);
  dn4(q); en4(q); fn4(dh);
  cn5(q); as4(q); as4(q); an4(q); fn4(dh);
  dn5(q); an4(q); an4(q); gn4(q); fn4(dh);
  en4(q); dn4(q); en4(dh); fn4(q); gn4(q);
  cn4(q); cn5(q); as4(q); an4(dh);
  gn4(q); an4(q); gn4(q); an4(q); as4(q); cn5(dh);
  dn5(q); an4(q); rst(q);
  an4(q); cs5(q); dn5(h); en5(h); fn5(h);
  an4(q); gn4(q); fn4(q); en4(q); fn4(q); an4(q); dn5(dh);
  dn4(q); en4(q); fn4(dh);
  cn5(q); as4(q); as4(q); an4(q); fn4(dh);
  dn5(q); an4(q); an4(q); gn4(q); fn4(dh);
  en4(q); fn4(q); gn4(dh); an4(q); as4(dh);
  an4(q); as4(q); cn5(dh);
  cs5(q); as4(q); an4(q); gn4(q); fn4(q); fn4(dh); en4(q); dn4(dh);
  fn4(q); an4(q); gn4(dh);
  fn4(q); dn4(q); fn4(q); en4(q); en4(dq); fn4(q); gn4(dh);
  an4(q); as4(q); cn5(dh);
  an4(q); cs5(q); en5(q); gn5(q); fn5(q); en5(q); fn5(q); dn5(dh);
  fn5(q); an5(q); gn5(dh);
  fn5(q); dn5(q); fn5(q); en5(q); en5(dh); fn5(q); gn5(dh);
  as4(q); gn4(q);
  an4(dh);

  return 0;
}
