int  bC(int   P4[],   int  Av)   {
   int   u[128]  =  {0},  zEf   =   0;
 for   (int  D   = 0; D  < Av;  D++) {
   if  (u[D]) continue;
   for  (int G =   D +  1; G <  Av; G++)  {
  if  (!(P4[D]   ^  P4[G]))   u[G]  =  1;
  }
 }
  for   (int D  =  0;   D  <  Av; D++) if   (!u[D]) P4[zEf++] =  P4[D];
   return   zEf;
}