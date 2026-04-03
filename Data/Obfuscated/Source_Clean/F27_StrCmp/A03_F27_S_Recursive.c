int   grJI1(const   char  *qD,   const   char  *nl9)   {
  if (*qD  ==  '\0'   || *qD   !=   *nl9)
   return  *(unsigned   char   *)qD   -  *(unsigned  char *)nl9;
   return  grJI1(qD  +   1,   nl9  + 1);
}