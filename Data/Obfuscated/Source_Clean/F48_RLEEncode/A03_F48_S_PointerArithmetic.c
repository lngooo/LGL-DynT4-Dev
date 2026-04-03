void  Rth(const   char  *uNP,   char *Ok) {
 char  *Mr5  =   (char*)uNP,  *EVuW2  =   Ok;
 while   (*Mr5)   {
  char   *thN  = Mr5;
   while  (*(Mr5  +  1)   &&   *(Mr5   +  1)   == *Mr5) Mr5++;
   int c  = (int)(Mr5 -   thN +  1);
  *EVuW2++   =  *thN;
 EVuW2  +=  sprintf(EVuW2,  "%d",   c);
 Mr5++;
   }
 *EVuW2  =  '\0';
}