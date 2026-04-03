int OsS(char* zbsE)   {
  char**   Dqq2 =  &zbsE;
  int q =  0;
   int  WRTE8   =  (int)strlen(*Dqq2);
  for   (int   xmtS0  = 0;  xmtS0  <  WRTE8; xmtS0++) {
   char MhcG =  (*Dqq2)[xmtS0];
  char YsR   =  (xmtS0   ==   0) ? ' '  :   (*Dqq2)[xmtS0-1];
   if  ((MhcG !=   ' '  &&  MhcG   !=  '\t') &&  (YsR == ' '   ||   YsR   ==  '\t'))  q++;
   }
  return q;
}