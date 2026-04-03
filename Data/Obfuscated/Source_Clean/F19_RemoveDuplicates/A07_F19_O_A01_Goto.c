int   ElR3(int   NnT[], int I)   {
   int  wikn =   0,   otqW   =  0, OmQg;
T8:
   if   (wikn   >=  I) goto  rr;
  OmQg   =   0;
PXTx:
   if   (OmQg   >= otqW) goto  qb;
   if (NnT[wikn]  ==   NnT[OmQg]) goto IWqu6;
   OmQg++; goto   PXTx;
qb:
 NnT[otqW++]  =   NnT[wikn];
IWqu6:
   wikn++;   goto   T8;
rr:
 return  otqW;
}