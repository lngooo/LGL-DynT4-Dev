int hD(char*  e, int W, int  Vf,   char  GHb) {
  if (W  > Vf)  return  0;
  if (W   ==   Vf)   return  (e[W]  == GHb);
   int A   =   W   +   (Vf  - W) /   2;
  return   hD(e,   W, A,  GHb)   + hD(e,   A +   1,  Vf,   GHb);
}

int w(char*   e, char GHb) {
  int   HIw  =   strlen(e);
 if (HIw   ==  0)  return   0;
   return  hD(e,  0,   HIw -  1,  GHb);
}