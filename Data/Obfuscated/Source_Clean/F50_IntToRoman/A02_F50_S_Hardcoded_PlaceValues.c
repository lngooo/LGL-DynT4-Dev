void   Slzy(int  aka,   char*   HKg2)   {
 char*  rH[] = {"",  "M", "MM",   "MMM"};
   char*   WdvU[]  =  {"",   "C",   "CC",  "CCC", "CD",  "D", "DC",   "DCC", "DCCC",  "CM"};
  char*   U3[]   =  {"",  "X",   "XX",  "XXX",   "XL",  "L",  "LX",  "LXX",  "LXXX",   "XC"};
 char*   zEfl[]   =  {"", "I",   "II",  "III", "IV",  "V", "VI",   "VII", "VIII",  "IX"};

  HKg2[0]  = '\0';
   strcat(HKg2,  rH[aka /  1000]);
   strcat(HKg2,  WdvU[(aka  %   1000)   / 100]);
 strcat(HKg2,  U3[(aka %   100)  /   10]);
  strcat(HKg2,   zEfl[aka  % 10]);
}