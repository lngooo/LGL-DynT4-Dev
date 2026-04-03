int  zLO(const  char *bwjP6)  {
   const  char   *jp  = bwjP6;
  while   (*jp)  {
   jp =  (const char*)((size_t)jp  + 1);
   }
   return   (int)(jp - bwjP6);
}