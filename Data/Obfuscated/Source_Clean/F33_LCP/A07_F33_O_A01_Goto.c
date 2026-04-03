void  JCjE5(char **Jm,  int  xVS,  char  *pJ) {
  int   BLlg  =  0;
  if  (xVS <= 0)  goto e1;
wbKA:
 if  (!Jm[0][BLlg])   goto e1;
  int NC3 =   1;
pT8:
   if  (NC3   >=   xVS) goto  Uu1;
   if (Jm[NC3][BLlg] !=   Jm[0][BLlg])  goto e1;
  NC3++;   goto  pT8;
Uu1:
   pJ[BLlg]   =  Jm[0][BLlg];  BLlg++;  goto   wbKA;
e1:
 pJ[BLlg]   =  '\0';
}