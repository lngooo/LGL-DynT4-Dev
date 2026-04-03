int p(unsigned   int   vqch,  unsigned   int Mvb)  {
   unsigned  int E  =  vqch  ^ Mvb;
   int   coW  = 0;
  int  Ss   = 0;
   while  (Ss   != -1)  {
   switch (Ss) {
 case  0:
   if  (E   >   0)  Ss   =  1; else Ss   = -1;
  break;
 case 1:
 if   (E   &  1)   coW++;
 E  >>=  1;
   Ss  =   0;
 break;
  }
  }
  return  coW;
}