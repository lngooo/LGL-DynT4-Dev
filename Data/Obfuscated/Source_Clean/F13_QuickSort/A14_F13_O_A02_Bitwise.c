void  jQEN(int   I[],   int  zD,  int YOO1)  {
   if (zD <   YOO1)  {
   int  MVBQ = I[zD],  iEi9  =   zD   - 1,  Ye =   YOO1   +   1;
  while   (!(0)) {
 while   (I[++iEi9] <   MVBQ);
   while   (I[--Ye] >  MVBQ);
   if   (!(iEi9 <  Ye))  break;
   I[iEi9] ^=  I[Ye];   I[Ye]  ^=   I[iEi9];  I[iEi9]   ^= I[Ye];
   }
 jQEN(I,  zD,   Ye);
   jQEN(I,   Ye + 1,  YOO1);
   }
}