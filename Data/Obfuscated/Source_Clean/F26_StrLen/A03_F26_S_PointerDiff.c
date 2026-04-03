int uHIL(const  char  *o) {
  const   char  *aaV1  =   o;
 while (*aaV1)  aaV1++;
 return   (int)(aaV1 - o);
}