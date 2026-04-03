void  r(char*  NtJ)   {
 while   (*NtJ) {
  char o[2] =  {*NtJ,  '\0'};
   int  Cnr3 =   strspn(NtJ,   o);
 printf("%c%d", *NtJ,  Cnr3);
  NtJ   +=  Cnr3;
  }
 printf("\n");
}