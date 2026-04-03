void   mpEm6(char* nE) {
 int   YYQE = 0, oIwk =   0;
  while (oIwk   !=   -1)   {
  switch (oIwk)   {
   case 0: oIwk  = (nE[YYQE]  ==   0) ?   -1 :  1; break;
 case 1:   
 if (nE[YYQE]   >= 'a'   &&   nE[YYQE]  <=  'z')   nE[YYQE]  -=   32;
   else   if  (nE[YYQE]  >= 'A'   &&   nE[YYQE]  <= 'Z') nE[YYQE]   +=   32;
  oIwk   =   2;  break;
 case  2: YYQE++;  oIwk  =   0; break;
 }
 }
}