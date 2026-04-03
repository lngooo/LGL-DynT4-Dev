int P2(int  vB) {
 int DG  =  0;
  if  (vB >= 1   <<   16)  {  vB   >>=   16; DG  += 16;  }
   if   (vB  >=  1 <<  8) { vB >>=   8;  DG   +=  8; }
 if   (vB >=   1  <<  4)   { vB  >>=   4;  DG +=   4;   }
  if (vB  >=  1 <<   2)  {   vB >>=  2;  DG += 2;   }
 if   (vB  >=  1  <<  1)  { DG  +=   1;   }
  return   DG;
}