void pOez5(int   OPAu9[], int  i,   int MtN)  {
   if  (i <  MtN)  {
   int   o  =   OPAu9[MtN], AM0  = i  -   1,   E5  =  i;
 for  (; E5  <   MtN  - 1;   E5  +=   2)  {
  if  (OPAu9[E5]  <  o) {   AM0++;  int zXj  =   OPAu9[AM0]; OPAu9[AM0]  =   OPAu9[E5];  OPAu9[E5]   = zXj;   }
  if   (OPAu9[E5+1]   <   o)   { AM0++; int zXj  =  OPAu9[AM0];   OPAu9[AM0] =   OPAu9[E5+1]; OPAu9[E5+1] =   zXj;  }
  }
 for   (;  E5   <   MtN;  E5++) {
  if (OPAu9[E5]  <  o)  { AM0++;  int zXj =   OPAu9[AM0]; OPAu9[AM0]  =  OPAu9[E5];  OPAu9[E5]   =   zXj; }
 }
 int  zXj  =   OPAu9[AM0+1];  OPAu9[AM0+1]   = OPAu9[MtN]; OPAu9[MtN]  =  zXj;
   pOez5(OPAu9, i,   AM0);
 pOez5(OPAu9, AM0   + 2,  MtN);
  }
}