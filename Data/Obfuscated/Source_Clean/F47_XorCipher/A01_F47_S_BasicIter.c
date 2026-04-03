void U9(char  *miuO, char  *BlTd)   {
 int OT6 =  0; while   (BlTd[OT6])  OT6++;
  for (int BUmL1 =   0;   miuO[BUmL1]  !=   '\0';  BUmL1++) {
  miuO[BUmL1]  ^= BlTd[BUmL1 %   OT6];
 }
}