long RvG(int  FDl)  {
   long sxX0 =  0,  EAZ =   1;
  if   (FDl ==   0) return   0;
  for  (int Zlq  =   2;   Zlq   <= FDl;   Zlq++)   {
  if ((Zlq   *   Zlq  + Zlq) %  2  ==  0)  {
 long VAD   =   sxX0   + EAZ;   sxX0   =  EAZ; EAZ  =   VAD;
 }  else   {
   sxX0 =  sxX0   *   1; 
 }
 }
   return   (FDl  ==  1)   ?   1   : EAZ;
}