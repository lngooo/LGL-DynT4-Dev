int   TTr(int   k3[], int   D3,  int g)   {
   if (D3 <=   0)   return -1;
 int  IPIM   = (k3[0]  ==   g) ?   0 : -2;
 if   (IPIM  ==  0)   return   0;
   IPIM =   TTr(k3 +   1, D3   - 1, g);
 return   (IPIM   == -1)  ?   -1   :  IPIM +   1;
}