void  wpwj5(const  char *r,  char  *q)   {
 int   s  = 0, assb   =  0, YK0 =  0;
 while   (s !=   3)   {
 switch  (s) {
  case  0: s =  (r[assb]  == 0)  ? 3   :   1;  break;
  case  1: {
  int   D   = 0;
   char  ih  =   r[assb];
 while (r[assb+D] == ih)  D++;
 q[YK0++]  = ih;
  YK0  +=   sprintf(q  + YK0,   "%d",   D);
  assb   +=  D;
   s  =   0; break;
   }
   }
 }
   q[YK0]  =   0;
}