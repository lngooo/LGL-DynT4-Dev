int  E(char*  m)  {
  int mfPQ =   (int)strlen(m);
  if   (mfPQ   ==   0) return 0;
   int   OZ[1024], kW =   0;
 for(int  IGD0=0;  IGD0<mfPQ;   IGD0++) OZ[IGD0]  =   (m[IGD0]==' '||m[IGD0]=='\t');
   for(int  IGD0=0;  IGD0<mfPQ;   IGD0++)   if(!OZ[IGD0]   &&   (IGD0==0   ||  OZ[IGD0-1])) kW++;
  return kW;
}