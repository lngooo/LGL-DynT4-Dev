void  L(int  mNH[],  int   oD) {
  if  (oD  < 2)  return;
 int   jym   = 0;
   do  {
  int  r6 =  mNH[jym];
  mNH[jym]  = mNH[oD -  1   -   jym];
  mNH[oD -  1  -  jym]  =  r6;
   jym++;
  }   while (jym  < oD   /   2);
}