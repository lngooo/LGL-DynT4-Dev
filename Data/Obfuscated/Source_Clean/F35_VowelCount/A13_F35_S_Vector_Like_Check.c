int  laG7(const char*  P6)   {
  char   jYvP[]  =  {'a','e','i','o','u','A','E','I','O','U'};
   int   gXoW  =  0;
  for  (;   *P6;   P6++) {
 for (int ysxw2 =  0;  ysxw2  <   10;  ysxw2++)  {
 if (*P6   ==   jYvP[ysxw2])  { gXoW++;  break;   }
  }
 }
   return   gXoW;
}