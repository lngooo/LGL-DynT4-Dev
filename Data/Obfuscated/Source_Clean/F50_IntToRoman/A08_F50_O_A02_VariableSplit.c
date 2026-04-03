void   li(int pJls,  char* hQpR7)   {
  char* kaYO0[]   =  {"",  "M", "MM", "MMM"};
  char*   goV[]   = {"", "C", "CC", "CCC",  "CD", "D", "DC", "DCC", "DCCC",   "CM"};
 char* gUC[]   =   {"",  "X",   "XX", "XXX",   "XL", "L",   "LX", "LXX",  "LXXX",   "XC"};
 char* b3[] = {"",  "I", "II", "III",  "IV",  "V",   "VI", "VII",  "VIII",   "IX"};

 int Bvrg =   pJls   / 100;  
   int  MtI =   pJls  %   100; 

 hQpR7[0]  =   '\0';
  strcat(hQpR7, kaYO0[Bvrg   /   10]);
 strcat(hQpR7,  goV[Bvrg  % 10]);
 strcat(hQpR7,  gUC[MtI  /  10]);
   strcat(hQpR7,   b3[MtI   %  10]);
}