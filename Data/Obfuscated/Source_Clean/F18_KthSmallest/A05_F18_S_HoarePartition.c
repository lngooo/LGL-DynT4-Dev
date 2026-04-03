int   LG1(int   SES[], int  j3,  int   CEQ,  int XM)   {
   if  (j3  ==  CEQ) return  SES[j3];
  int   Ab7 =   SES[j3],  czI7   =  j3   -  1, sO   = CEQ + 1;
 while  (1) {
  do {  czI7++;  }  while   (SES[czI7] <   Ab7);
  do { sO--;  } while   (SES[sO]   > Ab7);
 if   (czI7   >=  sO)  break;
 int  so   = SES[czI7];  SES[czI7] =  SES[sO];   SES[sO] =   so;
  }
  int znOo =   sO;
  if (znOo - j3  >= XM   - 1)   return   LG1(SES,   j3,   znOo,  XM);
 return   LG1(SES,   znOo   +   1,   CEQ,  XM  - (znOo  -   j3   +  1));
}