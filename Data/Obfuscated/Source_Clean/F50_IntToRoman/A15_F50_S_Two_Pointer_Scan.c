void   w(int   eX,  char* Hy) {
  int wZ[]   = {1000,   900,  500,   400, 100,   90,   50,  40, 10,   9,  5,   4,  1};
 char ndcE0[]  =   "M\0CM\0D\0CD\0C\0XC\0L\0XL\0X\0IX\0V\0IV\0I\0";
 Hy[0]   =   '\0';
 char*   jmrd  =  ndcE0;
   for(int  FvUa=0;   FvUa<13; FvUa++) {
   while(eX  >=   wZ[FvUa])  {
  strcat(Hy, jmrd);
 eX  -=  wZ[FvUa];
  }
   jmrd   +=  strlen(jmrd) + 1;
   }
}