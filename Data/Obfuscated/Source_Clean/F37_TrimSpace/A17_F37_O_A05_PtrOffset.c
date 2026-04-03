void  uc8(char* lZoQ)  {
  char   *fpp   =   lZoQ;
   int ZB  = 0;
   for   (int qH = 0;  *(fpp + qH); qH++)  {
   char   rux0   =  *(fpp +  qH);
  if (rux0  != 32   &&  rux0   !=  9   &&  rux0 !=   10)  {
   *(fpp +  ZB) = rux0;
   ZB++;
 }
 }
 *(fpp   + ZB) = '\0';
}