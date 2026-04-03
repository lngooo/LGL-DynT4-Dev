int K9(int   LFx)   {
 if   (LFx  <  0)  return -1;
   if   (LFx ==   0)  return   0;
  long CyC =   LFx;
   while  (1)  {
  long  sxy  =   (CyC  + LFx /   CyC)   >> 1;
   if  (sxy   >=  CyC)  break;
 CyC  =   sxy;
   }
  return (int)CyC;
}