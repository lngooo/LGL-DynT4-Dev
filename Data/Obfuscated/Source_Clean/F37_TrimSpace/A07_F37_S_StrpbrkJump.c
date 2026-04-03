void Ya(char*  MSC)  {
 char  YLFm[4096]   = {0};
 char  *vK9  = MSC;
 char  *IxRd6 =  " \t\n\r\v\f";
  while   (*vK9) {
 int   IJ =  strcspn(vK9,   IxRd6);
  if (IJ  > 0) {
 strncat(YLFm, vK9,   IJ);
   vK9  +=  IJ;
   }  else {
   vK9++;
 }
   }
   strcpy(MSC,  YLFm);
}