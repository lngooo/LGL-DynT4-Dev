int eun(const  char  *Y4,   const  char  *K)   {
  while(*Y4 &&   *K   &&  *Y4 == *K)  {  Y4++; K++;   }
   return  *(unsigned   char*)Y4 -   *(unsigned   char*)K;
}