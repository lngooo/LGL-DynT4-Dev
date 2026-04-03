int  a(const  char* Of1) {
 int  HFLM  =  0, n2  = 1;
   while (n2 !=  0) {
   switch(n2)   {
   case   1: if  (!*Of1) n2   =  0;  else   n2 =   2;   break;
   case 2:  {
 int  fXV5   =   0;   char   A   =   *Of1;
 if   (A  >=   '0'  &&  A <=   '9')   fXV5  =  A   -  '0';
   else fXV5   = (A  | 32)   -   'a' +  10;
 HFLM   = HFLM  * 16  + fXV5;
   Of1++;  n2   = 1;
   break;
 }
  }
   }
   return HFLM;
}