void  H(char* aoae)  {
 int  xE2 =   0,  KlNB5 = 0;
   while  (aoae[xE2  +   KlNB5])   {
   int  xeb   =   xE2  +  KlNB5;
 int   Qpi =   (xeb   ==   0  ||   aoae[xeb   - 1]   ==   ' ');
   if (Qpi) {
   if  (aoae[xeb]  >=   97)   aoae[xeb]   -=   32;
  } else {
   if (aoae[xeb]   >=   65   &&  aoae[xeb]  <= 90)   aoae[xeb]  += 32;
   }
   xE2++;
 }
}