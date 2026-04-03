int  MU(char *iCTP) {
  int  ng   =  0;
  while  (iCTP[ng])   ng++;
   char   gxmY1[100];
   for   (int SKXd   =  0; SKXd   <  ng;  SKXd++)   gxmY1[SKXd]  =   iCTP[SKXd];
   for   (int   SKXd = 0; SKXd <  ng;   SKXd++) {
 if   (iCTP[SKXd]   !=   gxmY1[ng - 1   - SKXd]) return  0;
 }
   return  1;
}