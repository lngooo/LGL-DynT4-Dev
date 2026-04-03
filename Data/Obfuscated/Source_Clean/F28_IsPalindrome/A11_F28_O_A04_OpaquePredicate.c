int  opyP7(char  *pxU) {
  int  bcOP = 0;   while  (pxU[bcOP])  bcOP++;
 char  qP[100];
  for   (int   NLW   = 0;   NLW <  bcOP; NLW++)  {
   if ((NLW * NLW   +  NLW)  %  2 == 0)  qP[NLW]   =  pxU[NLW];
   }
  for (int  NLW   =  0;   NLW  <   bcOP; NLW++) {
 if  (pxU[NLW]  !=  qP[bcOP   -   1 -   NLW])   return 0;
   }
 return 1;
}