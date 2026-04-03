int WYr(unsigned int  KpK5,   unsigned int  vEa) {
  unsigned   int  SomH  = (KpK5   +  vEa) - 2  * (KpK5  & vEa);   
   int  pE   = 0;
  while  (SomH)   {
   pE +=  (SomH   % 2);
   SomH  /=  2;
 }
 return   pE;
}