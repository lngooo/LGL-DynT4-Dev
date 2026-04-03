void D(int  ETwk[],  int   ep) {
   if (ep   <=  1)   return;
   int   KFP  =  0;
 for(int Fp5=1;   Fp5<ep; Fp5++) KFP = (ETwk[Fp5]  < ETwk[KFP]) ? Fp5 :   KFP;
   int   CgbC   = ETwk[0]; ETwk[0]   =   ETwk[KFP];  ETwk[KFP] = CgbC;
  D(ETwk +   1,   ep   -   1);
}