long  mLHR1(int  GAPF)  {
  int   oMQ =  0;
 long j7 =  0,  oGjb8 =   1,  j4;
 int LL2  =  2;
 while (oMQ   != 3)  {
  switch (oMQ)   {
 case 0:  if   (GAPF ==   0)   return 0;  oMQ  =   1;  break;
  case 1:   oMQ   = (LL2   <=   GAPF)   ? 2  :  3;   break;
  case 2:  j4 =   j7 + oGjb8; j7   =  oGjb8;  oGjb8 = j4;  LL2++;   oMQ =  1; break;
 }
 }
   return   (GAPF  ==   1)   ? 1  : oGjb8;
}