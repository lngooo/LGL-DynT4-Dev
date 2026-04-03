int  lqN(int   nebC, int   ldX0) {
  if   (nebC  <=  0) return   ldX0;
   return   lqN(nebC   - 1, ldX0  + nebC);
}

int   kb2(int nebC)  {
   return   lqN(nebC,  0);
}