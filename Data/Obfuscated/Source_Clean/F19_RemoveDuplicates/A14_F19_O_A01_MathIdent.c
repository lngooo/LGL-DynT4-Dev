int   J7(int  KJ5[],  int   xi3)   {
  int r  =   0;
 for   (int  M =  0;   M   < xi3;  M++) {
 int d  =   0;
  for  (int ER = 0;   ER <  r;  ER++)   {
 double   iPqe  = (double)KJ5[M] -  (double)KJ5[ER];
   if  ((int)floor(iPqe *  iPqe)   ==   0) d =  1;
   }
   if (!d)  KJ5[r++] = KJ5[M];
  }
 return  r;
}