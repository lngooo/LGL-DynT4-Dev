int Ou3(char*   cfTp,  char*   Tj) {
   int   rXD =   strlen(cfTp),   eop   =  strlen(Tj);
 if (eop  ==   0)  return   0;
 for   (int   O0   = 0;   O0   <=  rXD   -   eop;   O0++)  {
  if   (cfTp[O0]   ==   Tj[0]) {
 if (cfTp[O0+eop-1] ==   Tj[eop-1])  {
 if   (strncmp(cfTp   +  O0,   Tj,   eop) ==  0)  return  O0;
   }
   }
   }
 return  -1;
}