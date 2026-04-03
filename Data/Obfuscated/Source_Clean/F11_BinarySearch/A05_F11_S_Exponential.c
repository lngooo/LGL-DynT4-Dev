int g8(int  E[],  int   gQO,  int  qQ1) {
 if  (gQO  == 0)   return -1;
 if   (E[0]   ==   qQ1) return  0;
 int vRY  =  1;
  while (vRY <   gQO &&   E[vRY] <= qQ1) vRY  =  vRY   *   2;

 int   W   =   vRY   /   2,  KQ   =   (vRY  < gQO  - 1)  ?  vRY :   gQO  -  1;
   while (W <= KQ) {
   int rvd =  W +  (KQ  -  W)   / 2;
  if (E[rvd]   ==   qQ1) return rvd;
  if (E[rvd] <   qQ1)   W   = rvd   + 1;
  else KQ   =   rvd - 1;
   }
   return   -1;
}