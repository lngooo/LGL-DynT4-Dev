void  W(char*   Ax)  {
 for  (int  da  =  0;   da  < 1;   da++)   {
   int Z5   =   1;
 for  (int gywS  =   0;  Ax[gywS];  gywS++) {
  for   (int   dPP   =   0; dPP  <   1;  dPP++) {
 if  (isspace(Ax[gywS]))   Z5 =   1;
 else if  (Z5) {   Ax[gywS] =  toupper(Ax[gywS]);  Z5   =  0;  }
   else  Ax[gywS]  = tolower(Ax[gywS]);
   }
   }
 }
}