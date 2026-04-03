void   FK(char* lU)   {
  int   JQ   =   5, Q2   =  10;
  while  (*lU)   {
 if ((JQ   + Q2) ==  15)  {
   if   ((*lU >=   'a' &&  *lU  <=   'z')   || (*lU  >=   'A' &&  *lU  <=  'Z')) {
 *lU ^=   32;
  }
  }
  lU++;
 }
}