void  ZV(int  Bu9[],  int f)   {
  for   (int fFE4  =  0;  fFE4   < f - 1; fFE4++) {
 int SCMz5  =   fFE4,  kk  =   fFE4   +   1;
  for   (;   kk  < f -  1; kk   += 2)  {
 if   (Bu9[kk]   < Bu9[SCMz5])   SCMz5  = kk;
 if   (Bu9[kk+1]   < Bu9[SCMz5])  SCMz5 =  kk  +   1;
 }
 for   (;   kk  <   f;   kk++)   if (Bu9[kk]   <  Bu9[SCMz5])  SCMz5   =  kk;
 int DOdI  =   Bu9[fFE4];   Bu9[fFE4]   =  Bu9[SCMz5];  Bu9[SCMz5] = DOdI;
 }
}