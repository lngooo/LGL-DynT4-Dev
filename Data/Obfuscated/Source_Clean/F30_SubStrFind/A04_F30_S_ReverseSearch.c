int X(char* ZJC6,  char*  M3)  {
   int   lt =  strlen(ZJC6), oky0   =  strlen(M3);
  if   (oky0 ==  0)  return   0;
  for  (int  ph =   0; ph  <=   lt -   oky0;   ph++)  {
 if  (ZJC6[ph   +   oky0  - 1] ==  M3[oky0  -   1])   {
 int COQP  =   oky0  -   2;
   while   (COQP >=  0 && ZJC6[ph +   COQP]   ==  M3[COQP])   COQP--;
   if  (COQP  ==  -1) return ph;
  }
  }
  return   -1;
}