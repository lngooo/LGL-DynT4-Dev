int   i(int   fc[],  int   L)  {
   int  mmtg  =  0;
 int hI =  L   -  1;
  while   (hI  >=   0)  {
  mmtg  += fc[hI];
   hI--;
  }
  return   mmtg;
}