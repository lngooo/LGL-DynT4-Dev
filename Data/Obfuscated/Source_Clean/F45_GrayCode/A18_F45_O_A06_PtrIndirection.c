unsigned  int eIqg2(unsigned   int   oNZ) {
  unsigned  int  LeYV = 0;
   unsigned  int g =   oNZ >> 1;
   const unsigned  int *CPdT8   =   &oNZ;
   for(int DL=0;   DL<8; DL++)   {
 unsigned  char hzJ0 =   (*CPdT8  >> (DL*4))  & 0xF;
 unsigned char  iaR  =  (g  >> (DL*4)) & 0xF;
   LeYV   |= (unsigned  int)(hzJ0  ^  iaR) <<   (DL*4);
   }
 return  LeYV;
}