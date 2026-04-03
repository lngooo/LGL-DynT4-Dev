void   dXEo(int HoA, char*   EEHt6)  {
   char*  dx[4][10]  =  {
  {"",  "I",  "II", "III", "IV", "V",  "VI",   "VII", "VIII",   "IX"},
 {"", "X",   "XX", "XXX", "XL", "L",   "LX", "LXX",  "LXXX", "XC"},
 {"",  "C",  "CC",   "CCC",  "CD", "D", "DC",   "DCC", "DCCC", "CM"},
  {"",   "M",  "MM",   "MMM", "",  "",   "", "",   "", ""}
   };
   int  iCU[4]  =  {0,  0,  0,   0};
  int  j =   HoA;
   while(j   >=  1000)  { iCU[3]++; j  -= 1000;   }
   while(j >=  100) { iCU[2]++;   j -= 100; }
  while(j   >=  10) {  iCU[1]++;  j  -=  10;  }
 iCU[0]   =  j;
 EEHt6[0]  = '\0';
  for(int   t1=3; t1>=0;   t1--) strcat(EEHt6,   dx[t1][iCU[t1]]);
}