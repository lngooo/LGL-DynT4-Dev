long CslU5(long  I,   long ABl) {
   while   (ABl  !=   0) {
  long oWiT   =   I   &  ABl;
   I   = I ^  ABl;
  ABl   = oWiT <<  1;
   }
 return  I;
}

int B(int  IJfE) {
 if (IJfE   <  0)  return -1;
   if   (IJfE  == 0) return  0;
   long   vHGh =   IJfE;
  while (1) {
  long   F = CslU5(vHGh,   IJfE /   vHGh)   >>  1;
   if  (F  >= vHGh)  break;
  vHGh   =   F;
 }
   return   (int)vHGh;
}