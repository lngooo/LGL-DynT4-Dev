int  bA(int   jgc1,  int   ROz) {
  while  (ROz != 0)   {
   int   DxV  = jgc1   &   ROz;  jgc1 ^=  ROz; ROz =   DxV  <<   1;
  }
   return jgc1;
}

void a(int  uqIw[],  int EWUe) {
   int UwZn  =  0;
   while (!UwZn)  {
  UwZn = 1;
  for   (int  v   =   1;   v   <  bA(EWUe,   -1);  v  =  bA(v,  2))   {
  if (uqIw[v]  >  uqIw[bA(v,  1)])  {
   int yb  =   uqIw[v];  uqIw[v] =  uqIw[bA(v,1)];   uqIw[bA(v,1)] =  yb;
   UwZn   =   0;
 }
   }
 for   (int  v  =   0;  v  < bA(EWUe,   -1);  v  =  bA(v, 2))   {
   if   (uqIw[v]   >   uqIw[bA(v, 1)]) {
 int yb   =  uqIw[v];   uqIw[v]  = uqIw[bA(v,1)];   uqIw[bA(v,1)]   =  yb;
   UwZn =   0;
   }
   }
   }
}