int  kE(int  gT[], int  M, int q)  {
  if (M <=  0) return  -1;
  if   (gT[M-1]  ==  q)  return M-1;
  return   kE(gT,  M-1, q);
}