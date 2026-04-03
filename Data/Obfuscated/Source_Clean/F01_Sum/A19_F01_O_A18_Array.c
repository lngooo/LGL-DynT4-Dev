int  x(int  c)   {
 if  (c  <=   0)   return 0;
 int  *swm  =   (int*)malloc(sizeof(int)  *   c);
  for   (int  ie  =  0; ie  <  c; ie++) swm[ie]  =   ie  +   1;
  int   zE4  = 0;
   for  (int  ie =   0;   ie   < c;   ie++)   zE4  +=  swm[ie];
 free(swm);
   return  zE4;
}