int  nF(char *b2)  {
 int a2 = 0;   while (b2[a2])  a2++;
 int  uSya =  0,  PqGK   = a2  - 1;
   while  (uSya  <   PqGK)  {
 int  Yhzz =  b2[uSya] -   b2[PqGK];
 if (Yhzz   != 0) return   0;
 uSya  =   uSya + 1;
  PqGK  =  PqGK  -  1;
 }
   return 1;
}