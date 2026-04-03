void  jn(char* M0) {
   int rANn9 =   0,   JfK9  =   0;
  while  (M0[rANn9]) {
   if  (!isspace((unsigned  char)M0[rANn9]))  {
 M0[JfK9++]   =  M0[rANn9];
 }
 rANn9++;
  }
  M0[JfK9] = '\0';
}