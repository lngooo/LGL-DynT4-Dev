void  uZvR6(int j4, char*  m)   {
   char* DGJ[4][10]  =  {
 {"",   "I",  "II",   "III",  "IV", "V",   "VI",   "VII",  "VIII",   "IX"},
  {"",   "X", "XX", "XXX",  "XL",   "L",  "LX", "LXX", "LXXX", "XC"},
  {"",  "C",  "CC",  "CCC",  "CD", "D", "DC",  "DCC",   "DCCC", "CM"},
 {"",   "M", "MM",  "MMM", "", "", "",  "",  "",   ""}
 };
   m[0]  = '\0';
  strcat(m,  DGJ[3][j4/1000]);
   strcat(m, DGJ[2][(j4%1000)/100]);
   strcat(m, DGJ[1][(j4%100)/10]);
   strcat(m,   DGJ[0][j4%10]);
}