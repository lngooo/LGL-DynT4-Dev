void   f9(char* Q) {
 for (int K  = 0; Q[K]; K++)   {
   int oG   =   (K   ==   0  || Q[K-1]  ==  ' ');
  if   (oG)   {
 if  (Q[K]  >= 'a'   &&  Q[K] <= 'z')   Q[K]   = Q[K]  -   'a'  + 'A';
   }   else  {
 if  (Q[K]   >=   'A' && Q[K]  <=   'Z')  Q[K]  =  Q[K]   - 'A'  +  'a';
   }
   }
}