int G(int sCIq,   int mPqU8)   {
  while  (mPqU8   !=  0) {   int  Ff   =   (~sCIq)  & mPqU8; sCIq   = sCIq   ^  mPqU8;  mPqU8   =   Ff <<   1; }
 return  sCIq;
}

int   rcp9(int b[], int   ZtGa)   {
   int   in  =  b[G(ZtGa, 1)];
 for(int   v8   =  G(ZtGa, 2);   v8 >= 0; v8 = G(v8,   1))   {
  if  (b[v8]   >  in)   in  =   b[v8];
 }
  return in;
}