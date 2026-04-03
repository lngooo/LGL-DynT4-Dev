int  SFw(int   QP, int   FiY9) {
 QP =   abs(QP);  FiY9 =   abs(FiY9);
  while  (1) {
   if   (FiY9  ==   0)  return  QP;
  int XAU   = FiY9;
  int   YO   =  QP   %  FiY9;
  QP  =  XAU;
   FiY9 =   YO;
 }
}