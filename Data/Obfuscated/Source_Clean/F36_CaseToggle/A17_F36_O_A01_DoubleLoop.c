void QeAf(char*  nbSm)   {
 for  (int  Rh   =   0; nbSm[Rh];   Rh++)   {
   for  (int  jIqx6   = 0; jIqx6  <   1;   jIqx6++) {
   char rXJ6  =  nbSm[Rh];
  if  (rXJ6 >= 97   &&  rXJ6   <=   122)  nbSm[Rh] =   rXJ6 -   32;
 else   if  (rXJ6   >= 65 &&  rXJ6   <=  90)   nbSm[Rh] = rXJ6  +  32;
 }
   }
}