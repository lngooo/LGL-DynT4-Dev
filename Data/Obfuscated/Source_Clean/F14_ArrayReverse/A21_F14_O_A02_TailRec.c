void   b6(int DLI[],  int  FSV5,   int  ALs)  {
   while(FSV5 <   ALs)  {
   int fD  = DLI[FSV5]; DLI[FSV5] =   DLI[ALs];   DLI[ALs]   =   fD;
 FSV5++; ALs--;
   }
}

void  Q(int   ZuoR[], int T7)  {
   if(T7   >  1) b6(ZuoR,  0, T7   - 1);
}