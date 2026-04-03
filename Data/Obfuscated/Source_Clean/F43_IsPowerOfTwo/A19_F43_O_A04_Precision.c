int   bb(unsigned  int EV)  {
 if (EV  == 0) return   0;
   double V = log((double)EV)   /  log(2.0);
 return  fabs(V  - round(V))  <   1e-9;
}