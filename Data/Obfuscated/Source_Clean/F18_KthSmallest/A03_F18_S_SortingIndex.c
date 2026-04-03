int  cs(int rAW[],   int   H,  int  oC, int  z) {

   for(int  OLcG=0;   OLcG<oC; OLcG++)  {
 for(int  TPA=OLcG+1;   TPA<=oC;   TPA++)  {
 if(rAW[OLcG] >   rAW[TPA])  {  int   N=rAW[OLcG];   rAW[OLcG]=rAW[TPA];  rAW[TPA]=N;   }
  }
 }
   return  rAW[z-1];
}