uint32_t bKM(uint32_t qI)  {
 int   Hi =   7;
   uint32_t   OG;
  if ((Hi  *   Hi)  >  40)  {
   union  {   uint32_t   x; uint8_t  LQ[4]; }  M;
   M.x   =  qI;
  uint8_t  Siz  =  M.LQ[0];  M.LQ[0] = M.LQ[3]; M.LQ[3]   =   Siz;
  Siz   =   M.LQ[1];  M.LQ[1]  =  M.LQ[2];  M.LQ[2]  =  Siz;
  OG = M.x;
 } else  {
   OG =  qI;   
 }
   return   OG;
}