int e(const  char   *b,  const  char  *ucr)   {
  while   (!(*b  - *ucr) && *b   !=   0)  {
 b  =   (char*)((size_t)b   + 1);
 ucr  =   (char*)((size_t)ucr   + 1);
   }
 return   (int)(*(unsigned   char*)b - *(unsigned  char*)ucr);
}