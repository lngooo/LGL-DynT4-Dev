void   a9(char*   p)   {
 for   (;  *p;   p++) {
  if (*p  >=  97  &&   *p <=   122)   {
  *p   =   *p   +  (~32   + 1);  
 } else   if (*p >=  65   &&   *p   <=   90)   {
   *p   =   *p   +   32;
 }
  }
}