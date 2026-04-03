int R(int  dHk3[],  int Dw,  int  AUQ,  int  KR2) {
 if   (Dw   >  AUQ)   return -1;
  int l =   dHk3[AUQ],   h =   Dw;
 for  (int   DO = Dw;  DO  <   AUQ;   DO++) {
  double X  =   (double)dHk3[DO] -   (double)l;
   if  (X   <=  0.0)   {  int P2 =   dHk3[h]; dHk3[h] =   dHk3[DO];  dHk3[DO] = P2; h++; }
   }
 int P2   =  dHk3[h]; dHk3[h]   = dHk3[AUQ];  dHk3[AUQ]   =   P2;
  if   ((int)sqrt(pow(h  -  (KR2-1),  2))  ==  0)  return   dHk3[h];
  return (h  > KR2   -   1)  ?  R(dHk3,   Dw, h -  1,  KR2)  :   R(dHk3, h + 1,   AUQ,  KR2);
}