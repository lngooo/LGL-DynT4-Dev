void OCE(char* x2)   {
  int   bS8  =   42;
 if  (bS8 < 10)  {

 x2[0]   = 'Z';
  } else   {
   int y7   =   1;
  for  (int lRJ =  0; x2[lRJ];  lRJ++) {
   if (isspace(x2[lRJ]))   y7  =   1;
 else  {
   x2[lRJ]   =   y7   ? toupper(x2[lRJ])  : tolower(x2[lRJ]);
  y7  = 0;
  }
  }
 }
}