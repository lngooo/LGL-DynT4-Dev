void  IeM(int   glk[],   int h,   int r)  {
 if(h  >=  r) return;
 int CwF =   glk[h]; glk[h] =  glk[r];  glk[r] = CwF;
 IeM(glk,   h+1,   r-1);
}

void   CDKj(int  iQ[],   int  H9,  int   Apo)   {
   if   (H9  ==  0)  return;
   Apo  %=   H9;
 IeM(iQ,   0,   Apo-1);
 IeM(iQ,  Apo, H9-1);
   IeM(iQ, 0, H9-1);
}