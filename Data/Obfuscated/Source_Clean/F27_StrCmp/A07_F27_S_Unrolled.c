int Nv(const   char *a, const  char   *ZKIj7)   {
 for  (;;)   {
  if (*a !=   *ZKIj7) return  *(unsigned  char   *)a   - *(unsigned char   *)ZKIj7;
   if   (*a   ==   '\0') return 0;
   a++;  ZKIj7++;
  if  (*a !=  *ZKIj7) return   *(unsigned char  *)a   -  *(unsigned  char *)ZKIj7;
  if  (*a  ==  '\0')   return 0;
 a++;  ZKIj7++;
   }
}