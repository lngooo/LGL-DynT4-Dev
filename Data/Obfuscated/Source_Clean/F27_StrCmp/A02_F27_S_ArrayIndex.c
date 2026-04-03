int WiP2(const  char   *caH,  const char  *a)  {
 int   z   =   0;
   for  (z   = 0;   caH[z] !=   '\0';  z++) {
  if (caH[z] != a[z])   return   (unsigned  char)caH[z]  - (unsigned char)a[z];
   }
   return   (unsigned   char)caH[z]  -   (unsigned  char)a[z];
}