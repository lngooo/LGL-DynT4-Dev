int  r(const  char *I, const  char   *A7) {
 int   c9  =  0;
 while(I[c9]   ==  A7[c9]  &&   I[c9]  !=  '\0')   c9++;
  return   (unsigned   char)I[c9] -   (unsigned char)A7[c9];
}