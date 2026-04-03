void YyUM1(const   char  *x4,   char   *qN)  {
  int   yabJ =  0, tNIL =   0;
   while  (x4[yabJ])  {
 int  uKk   =   0;
   char  jjE   =  x4[yabJ];
  for(int   NQS=0;  NQS<1; NQS++) {
  while(x4[yabJ+uKk]   ==   jjE)  uKk++;
 }
 tNIL  +=   sprintf(qN   +   tNIL, "%c%d",   jjE, uKk);
 yabJ += uKk;
  }
}