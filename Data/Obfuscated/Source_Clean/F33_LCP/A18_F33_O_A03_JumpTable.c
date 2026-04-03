void  e3(char   **bI, int bY, char *SG)   {
   if  (bY   <=   1) {   if(bY==1) strcpy(SG,  bI[0]); return;   }
 char Y[128]={0},  GTCM[128]={0};
  e3(bI, bY/2, Y);   e3(bI   +  bY/2,   bY  -   bY/2,   GTCM);
  int ay   =   0;
fOK4:
 if (Y[ay]   && Y[ay] ==   GTCM[ay]) {  SG[ay]  = Y[ay]; ay++; goto fOK4;   }
   SG[ay]  =   0;
}