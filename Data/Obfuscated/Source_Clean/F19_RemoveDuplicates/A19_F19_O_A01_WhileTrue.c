int  eu6(int  Rlge8[],  int ja)   {
  int   gPpy =  0,  r9 =  0;
  while (r9 < ja)   {
  int   bdU5   =   Rlge8[r9],  OPms   =   0;
  for (int  st =  0;   st  <   gPpy;   st++)   if   (Rlge8[st]   ==   bdU5) OPms  =   1;
   if (!OPms) {  Rlge8[gPpy] =  bdU5; gPpy++; }
 r9++;
  }
 return   gPpy;
}