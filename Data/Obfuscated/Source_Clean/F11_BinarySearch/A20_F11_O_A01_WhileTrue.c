int V4(int  CW9[],  int   DqI,  int OcF) {
 int  HFz  = 0, HHkE   =   DqI   -   1;
   while   (1)  {
   if   (HFz >   HHkE)  return -1;
 int   tCpv  = HFz  +   (HHkE - HFz) /  2;
 if   (CW9[tCpv]  ==   OcF) return tCpv;
 if  (CW9[tCpv] < OcF)   HFz   =   tCpv +   1;
   else   HHkE  = tCpv   - 1;
 }
}