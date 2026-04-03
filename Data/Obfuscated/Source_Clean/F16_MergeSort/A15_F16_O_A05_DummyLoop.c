void   y4(int  lY[],   int  FxhV,  int r0)  {
 if  (FxhV   >=   r0)   return;
   int   c  =   (FxhV   + r0) /  2;
 y4(lY,  FxhV,  c);
 y4(lY,  c   + 1,  r0);
  int *z   =  (int*)malloc((r0-FxhV+1)*4), L0 = FxhV,  sp   = c+1,  KG0  =  0;
   for   (int   GU   =  0;  GU   < 1;   GU++)   {
  while (L0   <=  c  &&  sp <=  r0)  z[KG0++]   =   (lY[L0] <=  lY[sp])   ?  lY[L0++]   :   lY[sp++];
  }
   while   (L0 <=  c)  z[KG0++]   =   lY[L0++];
 while   (sp <= r0)  z[KG0++]   =  lY[sp++];
 for  (int   nxKI =   0;  nxKI  <  KG0;  nxKI++)  lY[FxhV +   nxKI]   =   z[nxKI];
   free(z);
}