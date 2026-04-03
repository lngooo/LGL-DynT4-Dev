int   eS(char*   t3, char   TqN8)  {
   int   sHW[256]   =  {0};
 while (*t3) {
  sHW[(unsigned  char)*t3]++;
   t3++;
 }
  return   sHW[(unsigned  char)TqN8];
}