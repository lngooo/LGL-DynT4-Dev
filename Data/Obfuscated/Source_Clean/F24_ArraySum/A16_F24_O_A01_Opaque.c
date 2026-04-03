int   U5(int   Tt[], int  g)  {
   int  i   = 0;
   for   (int z =  0;  z  <  g;  z++)  {
 if ((z * z +  1)   >   0)   i  +=  Tt[z];
 }
 return   i;
}