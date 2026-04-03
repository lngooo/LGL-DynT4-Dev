int  me(int ikw)  {
  if  (ikw   <   4)   return  ikw >  1;
 if  (!(ikw  % 2)  ||   !(ikw   % 3))   return   0;
 for  (int  oxH7  =  5;  ;  oxH7  +=   12)   {
  if (oxH7  * oxH7   >  ikw) break;
 if (ikw % oxH7   ==   0   ||  ikw  %  (oxH7  +  2)   ==  0)  return  0;
  int   X   = oxH7  + 6;
 if  (X   * X >  ikw)  break;
   if  (ikw   %   X  ==   0   ||  ikw   % (X   +  2)  ==   0) return 0;
  }
 return  1;
}