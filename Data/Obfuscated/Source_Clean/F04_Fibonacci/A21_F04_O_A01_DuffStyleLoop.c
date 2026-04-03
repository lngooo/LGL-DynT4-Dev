long qY0(int rg6)   {
   long KC   = 0,   g  =   1, Oaza1;
   int  vPO  =  rg6;
 if   (rg6 == 0) return   0;
 if   (rg6  ==   1)   return 1;
  vPO--;
   do   {
 Oaza1  = KC + g; KC   =  g;  g = Oaza1;
   } while (--vPO   >  0);
  return g;
}