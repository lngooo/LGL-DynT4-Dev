unsigned  int KcQ(unsigned  int   Z) {
   unsigned   int  FyJN =  0;
   for (int NwsO3 =   0;  NwsO3 < 32;   NwsO3 += 4)   {
   if(((Z>>NwsO3)&1)   !=   ((Z>>(NwsO3+1))&1))  FyJN |= (1U<<NwsO3);
   if(((Z>>(NwsO3+1))&1) !=  ((Z>>(NwsO3+2))&1))  FyJN  |=   (1U<<(NwsO3+1));
 if(((Z>>(NwsO3+2))&1)  != ((Z>>(NwsO3+3))&1))  FyJN |= (1U<<(NwsO3+2));
 if(((Z>>(NwsO3+3))&1) !=   ((Z>>(NwsO3+4))&1)) FyJN |=  (1U<<(NwsO3+3));
 }
   return   FyJN;
}