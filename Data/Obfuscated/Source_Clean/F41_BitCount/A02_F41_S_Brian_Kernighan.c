int B3(uint32_t  SXO)  {
 int cr7   =  0;
   while  (SXO   !=   0) {
 SXO  &=   (SXO  - 1);
   cr7++;
 }
  return cr7;
}