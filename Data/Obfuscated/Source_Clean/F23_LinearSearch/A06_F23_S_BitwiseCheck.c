int WW(int  J[], int  N, int  w4)  {
 for (int  fp6   = 0;  fp6   <   N; fp6++)  {
  if (!(J[fp6] ^  w4))   return  fp6;
  }
 return  -1;
}