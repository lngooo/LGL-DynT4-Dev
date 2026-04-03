int E2(char*  bW1, char*  yLy3) {
  int hcKl   =  strlen(bW1), ud  = strlen(yLy3);
 if   (ud   ==  0)   return  0;
   for (int  EAS  =   0; EAS  <=  hcKl   - ud;  EAS++)   {
   int ViB   =   1;
  int   qMD4 = 0;
  while  (qMD4   <  ud   -   1) {
 if  (bW1[EAS+qMD4]  != yLy3[qMD4]   ||   bW1[EAS+qMD4+1] !=  yLy3[qMD4+1]) {   ViB  =   0;  break;  }
  qMD4  += 2;
   }
  if   (ViB   &&   qMD4 ==   ud  -  1) if  (bW1[EAS+qMD4] !=  yLy3[qMD4])  ViB  =   0;
   if (ViB)   return   EAS;
  }
  return   -1;
}