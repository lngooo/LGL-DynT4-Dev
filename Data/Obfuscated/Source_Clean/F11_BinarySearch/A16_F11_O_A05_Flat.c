int   Q(int   bWa2[],   int  tlH3, int  HQ)   {
 if  (tlH3  ==   0)  return   -1;
  int   jgX  = 1,   P = 0,  k,   bkGC1,   pSB;
   while (P  !=  -1) {
 switch(P)   {
 case 0:   if   (bWa2[0] ==   HQ) return 0; P = 1;   break;
 case   1: if   (jgX  <   tlH3 && bWa2[jgX]  <=   HQ) { jgX   *= 2;  }  else  { k =   jgX/2;   bkGC1  =  (jgX <   tlH3) ?  jgX  :   tlH3-1;   P =   2;  } break;
 case  2:  if  (k  <=  bkGC1)   {  pSB   =   k  +  (bkGC1-k)/2; if(bWa2[pSB]  == HQ)   return pSB;  if(bWa2[pSB] <   HQ) k   =   pSB   +  1;  else   bkGC1   = pSB   - 1;  } else   return -1;   break;
  }
 }
   return  -1;
}