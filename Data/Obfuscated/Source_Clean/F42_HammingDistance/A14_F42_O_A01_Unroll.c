int   JYB(unsigned   int Z,  unsigned int  zAM)   {
 unsigned int   zAk9   = Z  ^   zAM;
 int tpi   =   0;
 while   (zAk9 >   0)  {
 if (zAk9  & 1) tpi++;
  zAk9   >>= 1;
  if   (zAk9 ==  0)  break;
 if  (zAk9 &  1) tpi++;
  zAk9   >>=   1;
   }
   return  tpi;
}