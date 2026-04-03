void  J3(char*   QP) {
 int  XlM  =  strlen(QP);
   if  (XlM   == 0) return;
 int XMWV   =   1;
  char   C  =  QP[0];
 for   (int hyY  =  1;  hyY   <=   XlM;  hyY++) {
 if   (QP[hyY]  == C)  {
 XMWV++;
 }  else   {
 printf("%c%d", C,  XMWV);
  C   =  QP[hyY];
 XMWV = 1;
   }
 }
   printf("\n");
}