int   SodW(char*   GGNO,  char*  Udjr2)   {
 int L  =  strlen(GGNO), yzf  =   strlen(Udjr2);
 if (yzf   == 0)  return  0;
   int   ZVUh6  = 0,   zb   =  0;
   for  (int Jd  = 0;  Jd < yzf;  Jd++)  {
 ZVUh6   += Udjr2[Jd];
   zb  +=   GGNO[Jd];
  }
  for (int  Jd   =   0; Jd   <=  L   - yzf;   Jd++)  {
 if   (ZVUh6   ==   zb)   {
 if  (strncmp(&GGNO[Jd],   Udjr2,   yzf)   == 0) return Jd;
  }
  if (Jd < L -  yzf)   zb   =  zb  -   GGNO[Jd] + GGNO[Jd   +   yzf];
   }
   return -1;
}