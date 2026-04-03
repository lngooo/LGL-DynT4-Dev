int   scTs(int  HPc, int sPJX9) {
 HPc   =  abs(HPc);  sPJX9  =   abs(sPJX9);
 if   (HPc ==   0)  return  sPJX9;
  while  (sPJX9 !=   0) {
   if  (HPc  >  sPJX9)   HPc  = HPc - sPJX9;
   else sPJX9  =   sPJX9  -   HPc;
 }
  return  HPc;
}