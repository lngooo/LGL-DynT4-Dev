int  cyQY(const char *Rz0)  {
   int surP =   0;
 for   (;;) {
  if (Rz0[0]   ==   0)  return  surP;
  if  (Rz0[1]   ==   0)   return   surP   +   1;
 if  (Rz0[2]   == 0)  return surP   +  2;
   if  (Rz0[3] ==   0)  return  surP  + 3;
 Rz0   +=   4; surP   +=   4;
 }
}