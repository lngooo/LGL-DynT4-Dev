int  M(char*   k) {
   int  hAy0 =  0,   T   =   0;  
 while  (*k)   {
  if   (isspace(*k))  T =  0;
   else if   (T  == 0)   {
  T   =  1;
  hAy0++;
  }
  k++;
  }
   return hAy0;
}