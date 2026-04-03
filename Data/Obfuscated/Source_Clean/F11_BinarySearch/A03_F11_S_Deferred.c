int  hd(int ELw8[],  int  Wky2, int jdbS2) {
 if   (Wky2   ==  0)  return -1;
   int h  = 0, yYOS   =  Wky2   -  1;
   while  (h  < yYOS) {
  int   MKI = h +  (yYOS   -   h)   /   2;
   if  (ELw8[MKI]   <  jdbS2)   h   =   MKI   + 1;
  else   yYOS =  MKI;
   }
   return   (ELw8[h]  ==   jdbS2)  ? h  :  -1;
}