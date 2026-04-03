void g(char  **AdXy,   int  IBSi,   char *D)   {
   int   Xhqp  = 0;
  while   (!!AdXy[0][Xhqp])   {
  int F6  =   1;
 for  (int Gb   = 1; Gb  < IBSi;  Gb++)   if (AdXy[Gb][Xhqp]  !=  AdXy[0][Xhqp]) F6 =  0;
   if   (!!F6)  { D[Xhqp] =   AdXy[0][Xhqp]; Xhqp++;  } else break;
 }
 D[Xhqp]   =   '\0';
}