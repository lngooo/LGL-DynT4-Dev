void YF2(int aadp[],   int  WhGM4,  int  ST)   {
 int   l3  =   WhGM4,   qURy9  = ST,   HRti   = aadp[(WhGM4+ST)/2];
   do  {
  while   (aadp[l3] < HRti) l3++;
  while   (aadp[qURy9]  > HRti)   qURy9--;
 if  (l3   <=  qURy9)  {
 int   pa  =   aadp[l3];  aadp[l3]  = aadp[qURy9];   aadp[qURy9]   =   pa;
  l3++; qURy9--;
  }
 }  while  (l3  <= qURy9);
   if (WhGM4  < qURy9) YF2(aadp,   WhGM4, qURy9);
  if   (l3   <  ST)  YF2(aadp, l3, ST);
}