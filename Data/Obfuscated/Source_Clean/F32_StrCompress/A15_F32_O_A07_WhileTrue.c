void   Qv(char*  XHbb) {
  int   Kj   =   0;
 while (1)   {
   if  (!XHbb[Kj])  break;
  int  HI   =   Kj;
  while   (XHbb[HI]   && XHbb[HI]  ==  XHbb[Kj]) HI++;
 printf("%c%d",  XHbb[Kj],   HI  -  Kj);
   Kj = HI;
 }
 printf("\n");
}