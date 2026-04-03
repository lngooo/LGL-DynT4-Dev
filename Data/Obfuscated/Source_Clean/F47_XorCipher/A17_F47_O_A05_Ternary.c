void  lt(char   *Nk, char *zMV)   {
  int RiH =   0;   while(zMV[RiH])   RiH++;
  for(int  izx3=0; Nk[izx3]; izx3++)  {
  int  or9   =   izx3   % RiH;
   Nk[izx3]   = (or9 >=   0) ?   (Nk[izx3]  ^  zMV[or9])  :   Nk[izx3];
 }
}