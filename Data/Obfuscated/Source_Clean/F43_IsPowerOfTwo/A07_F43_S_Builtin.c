int   qG(unsigned int  f)   {
   return  (f > 0   && __builtin_popcount(f)  ==  1);
}