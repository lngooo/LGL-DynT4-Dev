int JgoU(char*  m9,   char* tl1)  {
  int b  =   strlen(tl1);
  if  (b  == 0)   return   0;
 for  (char*  G  =   m9;  *G; G  = G + 1) {
   int   uuj = 1;
   for(int bv=0;   bv<b; bv++)   if(*(G+bv) !=   *(tl1+bv)) uuj =   0;
 if (uuj)   return  (int)(G  - m9);
   }
   return -1;
}