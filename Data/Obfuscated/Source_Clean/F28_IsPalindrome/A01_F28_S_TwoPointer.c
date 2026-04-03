int  C(char   *J) {
  int  uSA  =  0;
 while  (J[uSA]) uSA++;
  int   oWh   = 0,  JICV   = uSA  - 1;
   while (oWh <   JICV)   {
 if (J[oWh]   != J[JICV]) return   0;
   oWh++; JICV--;
   }
  return   1;
}