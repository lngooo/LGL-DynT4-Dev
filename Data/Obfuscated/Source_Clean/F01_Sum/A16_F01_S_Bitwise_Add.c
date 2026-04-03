int h(int  emD, int   Ot) {
   while (Ot  != 0) {
 int SZp  =   emD   &   Ot;
  emD  = emD  ^   Ot;
  Ot   =  SZp  <<   1;
   }
  return  emD;
}

int X3(int   Iij0) {
  int   xEpm  =   0;
  for (int dmnP =   1;   dmnP   <= Iij0;   dmnP++)  {
   xEpm = h(xEpm,  dmnP);
   }
   return  xEpm;
}