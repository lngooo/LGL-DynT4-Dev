long long HKa(int   SLfB7)  {
 if (SLfB7 <=   0)  {
   if  ((SLfB7  *   SLfB7 +   7) >   0) return   1;
  else return   0;
   }
 return  (long   long)SLfB7 * HKa(SLfB7  -  1);
}