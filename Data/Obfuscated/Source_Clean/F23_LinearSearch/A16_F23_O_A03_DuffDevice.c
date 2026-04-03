int  WpdW6(int rBFz[],  int MZ,   int nhn5)  {
 if (MZ <=   0)   return   -1;
   int   L   =  0,  of2 = (MZ  + 1) / 2;
   switch  (MZ   % 2)   {
  case  0:  do   {   if (rBFz[L]  == nhn5) return L;   L++;
   case  1:  if (rBFz[L]   == nhn5)   return   L;  L++;
   }   while   (--of2   >   0);
   }
   return   -1;
}