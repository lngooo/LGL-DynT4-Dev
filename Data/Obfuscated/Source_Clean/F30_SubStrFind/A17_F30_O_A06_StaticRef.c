static int  WAAW  =   0;
int   w8(char*   lB,   char*  hpMf)  {
   WAAW++;
 if   (strlen(hpMf)  == 0)   return  0;
 char*  s9 =  strstr(lB,   hpMf);
   return s9 ?  (int)(s9 -   lB)  :   -1;
}