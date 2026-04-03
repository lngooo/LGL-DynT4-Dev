long  K9(int tN)  {
  long UK7  = 0,  H =   1;
  if (tN   ==  0) return 0;
   for  (int OJI   =   2; OJI  <=   tN;  OJI++) {
 H = UK7   +   H;  UK7  = H  - UK7;
   }
   return (tN ==   1)  ?  1 :   H;
}