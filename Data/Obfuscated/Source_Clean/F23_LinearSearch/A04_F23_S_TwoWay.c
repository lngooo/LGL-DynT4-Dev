int n(int  uj4[],   int  rgz, int um7) {
   int  jh  =   0, mqO   =  rgz  -  1;
 while   (jh   <=  mqO)  {
   if  (uj4[jh]  == um7)   return jh;
   if (uj4[mqO] == um7)   return mqO;
  jh++; mqO--;
 }
   return   -1;
}