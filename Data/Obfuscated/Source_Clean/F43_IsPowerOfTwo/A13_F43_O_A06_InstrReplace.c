int  hl(unsigned   int   D3)   {
  unsigned int  Vev   =   1U   <<   31;
   if (D3  ==   0)   return 0;

 return   (D3  > 0   &&  (Vev /   D3)  *  D3  ==  Vev);
}