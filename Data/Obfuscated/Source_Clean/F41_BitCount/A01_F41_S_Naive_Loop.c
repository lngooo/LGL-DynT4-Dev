int  XP(uint32_t   PxOw)   {
 int  Bqm =  0;
   while (PxOw >   0) {
   Bqm  +=  (PxOw  & 1);
   PxOw >>=  1;
 }
 return   Bqm;
}