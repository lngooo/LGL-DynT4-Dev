int  hn6(char*   SLYI,   char* lhzn)  {
 int  FH2   =   strlen(SLYI);
 int XWd  = strlen(lhzn);
   if   (XWd   == 0) return  0;
   for (int vsE  =  0; vsE <=   FH2  -  XWd;  vsE++)  {
 int  ntWL;
   for  (ntWL =  0; ntWL  < XWd;  ntWL++) {
   if   (SLYI[vsE  +  ntWL]  != lhzn[ntWL])  break;
 }
  if (ntWL  ==  XWd)  return vsE;
 }
   return -1;
}