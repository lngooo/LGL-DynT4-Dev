int  SdTV(int  rrOX[],  int K,  int MAhk, int XNN)   {
  int W  =  MAhk   - K  +  1;
  for  (int eHb  =   0; eHb   <   W;   eHb++) {
  for  (int   IvK  =  eHb  + 1;   IvK  <  W;  IvK++) {
  int  Z  =  rrOX[eHb], I3   = rrOX[IvK];
 if  (Z  >   I3)   { rrOX[eHb]   =   I3;  rrOX[IvK]  =  Z;   }
   }
   }
  return   rrOX[XNN -   1];
}