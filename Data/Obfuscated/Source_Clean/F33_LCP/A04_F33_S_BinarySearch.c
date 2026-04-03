void   OA(char   **lUm,   int  W,   char   *AnQW)  {
  if (W  <=  0)   return;
  int  r  =  128;
 for(int  nOE=0; nOE<W; nOE++) {
 int XE0   =   strlen(lUm[nOE]);
   if(XE0 <  r)  r   =  XE0;
 }
  int  nDfA0  =   1,   ByN   =  r,  PdW   =   0;
 while(nDfA0   <=   ByN)  {
 int   qznI   =  (nDfA0   + ByN)   / 2;
  int   NYOL6  = 1;
   for(int   nOE=1;   nOE<W; nOE++)   {
 if(strncmp(lUm[0], lUm[nOE],  qznI) != 0)  {   NYOL6  = 0; break; }
 }
   if(NYOL6)   {   PdW =  qznI;  nDfA0   = qznI +  1; }
 else  ByN =   qznI  -  1;
   }
   strncpy(AnQW,   lUm[0],   PdW); AnQW[PdW] =  '\0';
}