void   W(const  char  *eZRN,  char *S) {
 char *qQtJ9  =  (char*)eZRN;
   int dcYN  =   0;
 while  (*(qQtJ9))  {
   int  xpG   = 0;
   char beM =   *qQtJ9;
  while  (*(qQtJ9  +   xpG)   ==  beM)  xpG++;
 *(S   +   dcYN++) =  beM;
   dcYN  +=   sprintf(S +   dcYN, "%d", xpG);
   qQtJ9   +=  xpG;
  }
  S[dcYN]   =   0;
}