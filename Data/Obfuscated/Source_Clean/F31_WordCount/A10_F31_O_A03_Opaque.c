int  kkd9(char*  y1) {
 int  rqSC  =   0;
   int   S  =  5, CXtg0 = 10;
   for (int gk = 0; y1[gk]   != '\0';  gk++) {
  if   (S   +  CXtg0  ==   15)  {
 if   (!isspace(y1[gk]) && (isspace(y1[gk+1])   ||  y1[gk+1] == '\0'))  rqSC++;
 }   else  {
  rqSC--; 
 }
  }
  return   rqSC;
}