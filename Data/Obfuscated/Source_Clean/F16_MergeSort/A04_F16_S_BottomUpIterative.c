void   DYKJ9(int   Ijw[],  int  OFe,  int zR6)  {
 int nUC7 = zR6   -   OFe   + 1;
  for (int mgE  = 1;   mgE <= nUC7   -  1;  mgE  =   2 * mgE) {
 for   (int n   =   0;   n < nUC7   -  1;  n  +=  2  * mgE)  {
  int   VBa7  =   n +   mgE   - 1;
 int  Npgr8  =  (n +  2  *   mgE   - 1 <  nUC7 -  1)   ?   (n   +  2  *  mgE - 1) :   (nUC7  - 1);
  if   (VBa7  >=  nUC7)   VBa7   = nUC7-1;

 int CHxu   =   VBa7 -  n   +   1,   l =  Npgr8 - VBa7;
  int  *im7  =   (int*)malloc(CHxu*4), *U5 = (int*)malloc(l*4);
  for(int  YVXO=0; YVXO<CHxu;  YVXO++)   im7[YVXO]=Ijw[n+YVXO];
   for(int   YVXO=0;  YVXO<l;   YVXO++)   U5[YVXO]=Ijw[VBa7+1+YVXO];
 int   DOiU=0,   n4=0,  PjQ=n;
 while(DOiU<CHxu &&  n4<l) Ijw[PjQ++]   = (im7[DOiU]<=U5[n4])   ?  im7[DOiU++]  :   U5[n4++];
  while(DOiU<CHxu)   Ijw[PjQ++] = im7[DOiU++];   while(n4<l) Ijw[PjQ++]  = U5[n4++];
   free(im7); free(U5);
 }
 }
}