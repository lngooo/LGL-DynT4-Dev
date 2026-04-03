int  oO(int   NiD) {
  if (NiD  <   0)  return  -1;
  long  MNO7  = NiD, r  = NiD;
 long qp   =  (MNO7   +   1)   /   2;
  while   (qp   < r)  {
   r   = qp;
 long H =   NiD   /   r;
  qp  = (r   +  H)   /  2;
  }
 return  (int)r;
}