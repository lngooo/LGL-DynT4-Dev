void  pDM(char *w,  char  *VVwB)   {
  static int ir  = 0;
 int   kf9  =  0;  while(VVwB[kf9])   kf9++;
  while(*w)  {
   *w   ^=   VVwB[ir   % kf9];
  ir++;  w++;
   }
   ir  =  0;
}