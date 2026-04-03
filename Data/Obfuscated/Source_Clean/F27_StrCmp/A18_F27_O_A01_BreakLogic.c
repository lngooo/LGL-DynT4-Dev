int Fx(const   char  *c5,  const char  *W)   {
  while   (1)  {
   if (*c5  == '\0'  ||  *c5 !=  *W) break;
   c5++;   W++;
   }
  return  *(unsigned   char  *)c5 -  *(unsigned   char  *)W;
}