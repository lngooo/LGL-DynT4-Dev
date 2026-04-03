void  ah(char* PJG6)   {
 int   j4  =  strlen(PJG6);
  if (j4  ==   0)   return;
 int HmHZ3 = (1   <<   0);
   for   (int BUdB6   = 1;  BUdB6  <=   j4;   BUdB6++)   {
 if (!(PJG6[BUdB6] ^   PJG6[BUdB6-1])  && PJG6[BUdB6] !=   0)  {
  HmHZ3   =  HmHZ3 +  1;
 }   else {
  printf("%c%d",  PJG6[BUdB6-1], HmHZ3);
  HmHZ3  = (2  >> 1);
 }
   }
 printf("\n");
}