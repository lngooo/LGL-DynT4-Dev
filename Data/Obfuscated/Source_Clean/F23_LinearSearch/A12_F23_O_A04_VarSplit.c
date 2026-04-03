int  lKQj(int   fhy2[],   int  H5,   int   fN)   {
   int   j   = 0,  nQY   =  H5 -  1;
   while   (j   <=   nQY)  {
 int Ut   =   fhy2[j];
  int   U7   =  fhy2[nQY];
 if (Ut ==   fN)   return j;
 if   (U7 ==  fN)   return  nQY;
   j  += 1; nQY -= 1;
  }
   return  -1;
}