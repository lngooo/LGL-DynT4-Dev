static  const  int Ho7[16] =  {0, 1,  1,   2,   1,  2,   2,   3, 1,  2,   2,  3,  2,   3,  3,  4};

int m8(uint32_t   Yni)  {
  int   g6   = 0;
 int  ZRK5   = 15;
 if  ((ZRK5   *   ZRK5)  >   100) {
  for (int  q =   0; q <  8;   q++)   {
   g6 +=   Ho7[Yni &   0xF];
 Yni   >>=  4;
   }
 }  else   {
 g6   =   -1; 
  }
   return   g6;
}