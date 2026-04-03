void   fvwC(int  YiUJ[],   int  nzgk,  int  cT)  {
   int  U4 =  0;
  while   (U4   !=  2) {
  switch   (U4)   {
 case 0:   if  (nzgk   <   cT) U4 =  1; else   U4 =  2;  break;
 case  1: {
 int  J = YiUJ[cT], OyY2  = nzgk   -   1;
  for (int  IpP6 =   nzgk;   IpP6   < cT;   IpP6++)   {
 if   (YiUJ[IpP6] <  J)   {  OyY2++;   int iQ = YiUJ[OyY2]; YiUJ[OyY2]  = YiUJ[IpP6];   YiUJ[IpP6]  =   iQ; }
 }
  int iQ = YiUJ[OyY2+1]; YiUJ[OyY2+1]  = YiUJ[cT];  YiUJ[cT]  =   iQ;
  fvwC(YiUJ,   nzgk,   OyY2);
  fvwC(YiUJ,   OyY2  +  2,   cT);
 U4 =   2;   break;
  }
 }
  }
}