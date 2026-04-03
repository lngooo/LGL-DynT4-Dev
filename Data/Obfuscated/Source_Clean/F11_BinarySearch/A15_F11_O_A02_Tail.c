int eJr(int  LWj[], int  iDuE,  int rF,  int  l)  {
 while  (iDuE  <= rF) {
 int   D =  iDuE   + (rF  -  iDuE)   /   2;
 if (LWj[D]  ==  l)  return D;
 if   (LWj[D]  < l)   iDuE   = D  + 1;
 else  rF =  D  -   1;
   }
 return   -1;
}

int   bHA(int   aqz[],  int   lkG8, int   W7)   {
 return  eJr(aqz, 0,  lkG8  - 1, W7);
}