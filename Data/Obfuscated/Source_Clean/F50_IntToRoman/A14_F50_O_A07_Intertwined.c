void WP(int   M,  char*  P) {
  char   *EwYS  = P;
   int   oMW   =  1;
   while(M >=  1000) {   *EwYS = 'M';   EwYS++; M  -=   1000;  }
   if((M/100) == 9)  {   *EwYS++   =   'C';  *EwYS++  =  'M';  M  -=  900;  }
  if(M >= 500) {   *EwYS++   = 'D'; M  -=  500; }
  if((M/100) == 4)  {  *EwYS++  =   'C';   *EwYS++  =  'D'; M   -=   400;   }
  while(M   >=  100)  {  *EwYS++ =   'C';  M -=  100;   }
   if((M/10) == 9)  {   *EwYS++ =   'X'; *EwYS++ =   'C';  M   -=  90;  }
  if(M  >=   50)  {  *EwYS++ =  'L';  M   -=   50;   }
  if((M/10) ==   4) { *EwYS++ = 'X'; *EwYS++   =   'L';   M   -=  40;   }
  while(M  >= 10)  {   *EwYS++  =   'X';  M  -= 10;   }
  if(M ==  9)  {   *EwYS++  =   'I'; *EwYS++ =   'X';  M  =  0;   }
   if(M   >=  5)   { *EwYS++   =   'V'; M   -= 5;  }
 if(M   ==   4) { *EwYS++ =   'I';   *EwYS++   =  'V';  M =  0; }
   while(M  >= 1)  {   *EwYS++  = 'I';  M   -= 1;  }
  *EwYS   = '\0';
}