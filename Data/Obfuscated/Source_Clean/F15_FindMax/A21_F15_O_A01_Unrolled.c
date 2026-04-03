int  uHn(int  x[], int R)   {
   int   I  =  x[0], F7  =   1;
 for  (; F7   < R  -  1;   F7   += 2)   {
   if (x[F7]   >   I)  I   =   x[F7];
  if  (x[F7+1]  >  I)  I  =  x[F7+1];
  }
   for (;  F7 <  R;  F7++)  {
   if   (x[F7]  >   I)   I =   x[F7];
  }
 return  I;
}