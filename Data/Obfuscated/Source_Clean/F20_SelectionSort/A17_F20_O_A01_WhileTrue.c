void aI(int LxD[], int  nl)  {
 int   ZMBw4   = 0;
 while  (1)  {
  if   (ZMBw4   >= nl)  break;
 int   Wm =   ZMBw4;
 for(int  D  =  ZMBw4   +   1; D   < nl;  D++) if(LxD[D]  <  LxD[Wm]) Wm   =  D;
   int   nQE =   LxD[ZMBw4]; LxD[ZMBw4]   = LxD[Wm];  LxD[Wm]   =  nQE;
   ZMBw4++;
 }
}