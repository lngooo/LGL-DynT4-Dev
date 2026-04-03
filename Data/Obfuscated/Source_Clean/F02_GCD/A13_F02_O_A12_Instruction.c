int  vA(int JHW,   int lg9) {
   long   long I   =   abs(JHW), vCy =  abs(lg9);
   if  (!(I &&   vCy)) return   (int)(I   |  vCy);
 long   long  NJ =  (I >   vCy)  ?  I   : vCy;
   long  long   B  =   NJ;
 while  ((B  % I)   | (B   % vCy)) {  B  +=   NJ; }
   return (int)((I *  vCy) /  B);
}