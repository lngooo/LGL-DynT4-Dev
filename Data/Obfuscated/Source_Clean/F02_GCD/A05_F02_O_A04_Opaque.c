int  VuO(int  P,  int   r)   {
   if (r  == 0)   {
   if ((P  *  P   +   1)   >  0) return   abs(P);
   }
 return  VuO(abs(r),   abs(P)  %   abs(r));
}