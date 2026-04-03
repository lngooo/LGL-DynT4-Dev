int  E(const char *ib,   const  char   *jfH)  {
  while   (*ib && (*ib ==   *jfH)) {
  ib++;
   jfH++;
 }
   return   *(unsigned char *)ib  - *(unsigned char *)jfH;
}