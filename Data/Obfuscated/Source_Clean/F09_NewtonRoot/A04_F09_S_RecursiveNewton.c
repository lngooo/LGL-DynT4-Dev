long qJy6(long  iJ,  int  PsMI)   {
   long i8   =  (iJ   +  PsMI  /   iJ)  /   2;
  if (i8 >=  iJ)   return  iJ;
   return qJy6(i8, PsMI);
}

int JaHI(int  PsMI)   {
   if  (PsMI <   0)   return   -1;
  if  (PsMI <  2)  return PsMI;
 return  (int)qJy6(PsMI,  PsMI);
}