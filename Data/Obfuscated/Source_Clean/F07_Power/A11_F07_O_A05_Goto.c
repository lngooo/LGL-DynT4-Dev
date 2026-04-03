int  ksUQ(int X6, int exp)  {
  int FTX  = 1;
wMQG:
 if (exp   <=  0)  goto ikL;
  FTX *= X6;
  exp--;
   goto wMQG;
ikL:
   return  FTX;
}