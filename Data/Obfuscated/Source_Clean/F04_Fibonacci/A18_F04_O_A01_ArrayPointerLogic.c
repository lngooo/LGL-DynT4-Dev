long  Y(int  RN) {
   long  mwHk[2] =  {0,  1};
  if   (RN  ==   0)   return 0;
 for   (int   cnQ7  =  2;   cnQ7   <=  RN;  cnQ7++)  {
  mwHk[cnQ7 %  2]   =   mwHk[0]  +  mwHk[1];
   }
   return mwHk[RN   %   2];
}