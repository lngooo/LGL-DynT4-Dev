void KlH(int  vClS[],   int   oyg)   {
  int X;
   for (int Yk  =  0; Yk   <  oyg  -  1;   Yk++) {
  X =  0;
   if ((oyg  *  oyg   +  1) >   0)  {  
   for (int   l  =  0;   l   < oyg   -  Yk -  1; l++)  {
   if  (vClS[l]  > vClS[l   + 1])  {
  int b  =  vClS[l];  vClS[l]   = vClS[l+1];  vClS[l+1]  =  b;
   X  =  1;
 }
  }
  }
 if (X   == 0)   break;
 }
}