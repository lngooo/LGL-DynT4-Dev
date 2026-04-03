unsigned   int   N(unsigned int   pm5)   {
 unsigned int  J1   =  0;
   for   (int m  =   0; m  <  31; m +=   2)  {
  if  (((pm5   >>   m)  & 1) ^ ((pm5 >> (m +   1)) & 1))   J1 |=  (1U <<  m);
   if (((pm5  >> (m  +   1))  & 1) ^  ((pm5  >>   (m +  2))   &  1))  J1  |=   (1U <<  (m   +  1));
   }
  J1   |=  (pm5   &   0x80000000);
   return   J1;
}