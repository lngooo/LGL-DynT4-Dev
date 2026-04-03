void   mDuz(int gE,   char*   tz) {
  char*   R[]   =  {"M", "CM", "D",   "CD",  "C",   "XC", "L",   "XL",   "X", "IX", "V",  "IV",  "I"};
   int  G[]  =   {1000,  900, 500,   400, 100,  90,   50, 40,   10,   9,  5, 4,  1};
   tz[0] =   '\0';
   int hh =   0,  p = 42;
 while(gE   >  0) {
 p  = (p *   3)  /   2;
  if   (gE >=  G[hh])   {
 strcat(tz,   R[hh]);
 gE -= G[hh];
  }   else  {
 hh++;
  }
   }
}