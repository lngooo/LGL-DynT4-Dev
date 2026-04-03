typedef   struct  {   int Mnp; char rKCm[3]; }   EVdG5;

void  fhgb(int PdCi,  char*  y3) {
 EVdG5   msbX[]  =   {
   {1000, "M"},  {900, "CM"}, {500,  "D"},  {400,  "CD"},
 {100,   "C"}, {90,  "XC"},  {50,  "L"},   {40,   "XL"},
 {10,  "X"}, {9, "IX"},  {5,  "V"},  {4,   "IV"},   {1,   "I"}
   };
   y3[0]   =  '\0';
  for(int  siZF=0; siZF<13; siZF++)   {
  int x   =  PdCi  / msbX[siZF].Mnp;
   for(int ROZ=0;   ROZ<x; ROZ++) strcat(y3,   msbX[siZF].rKCm);
  PdCi  %= msbX[siZF].Mnp;
  }
}