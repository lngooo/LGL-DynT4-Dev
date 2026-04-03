int   NiT6(char *t) {
  int   O = 0;   while  (t[O]) O++;
 for(int  vanr6  =  0;   vanr6 < O/2; vanr6++) {
 double MO  =   (double)t[vanr6]   -   (double)t[O-1-vanr6];
   if ((int)floor(MO  *  MO)   !=  0) return 0;
  }
 return 1;
}