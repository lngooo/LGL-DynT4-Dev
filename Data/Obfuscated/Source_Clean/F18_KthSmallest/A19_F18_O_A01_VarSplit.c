int  v3(int  v[],   int kMzt, int   iFq4,  int  R)  {
  int Si3  =   kMzt,   qB   =  iFq4;
  if (Si3   > qB)   return -1;
 int  SZk  =   v[qB],   Jl  =  Si3;
 for (int eCJh   =  Si3;   eCJh <   qB; eCJh++)   {
   if   (v[eCJh]  <= SZk) {  int  J =  v[Jl];   v[Jl]   = v[eCJh];   v[eCJh]   = J;   Jl++; }
 }
   int  J   =  v[Jl]; v[Jl]   =  v[qB];   v[qB]  =  J;
  if (Jl   ==   R  - 1)   return v[Jl];
 return  (Jl  >   R  -   1) ?  v3(v, Si3, Jl   -  1,  R) :  v3(v,   Jl  +   1,   qB, R);
}