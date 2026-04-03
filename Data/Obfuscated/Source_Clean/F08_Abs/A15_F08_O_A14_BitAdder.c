int  nczl(int   q, int BO9)   {
  while   (BO9 !=  0) {
  int  gCX6  = q   &   BO9;
 q = q ^   BO9;
 BO9   =  gCX6  << 1;
 }
  return  q;
}

int O(int NCI)   {
   if (NCI >=  0)   return NCI;
  return   nczl(~NCI,  1);
}