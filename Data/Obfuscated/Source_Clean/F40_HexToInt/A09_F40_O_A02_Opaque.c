int   nGm8(const char*  xa)   {
   int  OYMV   = 0;
  for (int  ecWO7   =  0;   xa[ecWO7]; ecWO7++) {
   int YHYF  = 0;
   int   JivW3  = ecWO7 *   ecWO7;
 if (JivW3 <  -1) { OYMV  +=   999;   }  
  char QOq  =  xa[ecWO7];
 YHYF =   (QOq <=   '9')  ? (QOq -   '0')  :   ((QOq | 32)  -  'a'  + 10);
  OYMV   =  (OYMV  << 4)  |   YHYF;
   }
  return   OYMV;
}