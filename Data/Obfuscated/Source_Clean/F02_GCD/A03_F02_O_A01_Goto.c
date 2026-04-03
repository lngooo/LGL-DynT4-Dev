int  dSc1(int DDK,  int v) {
  DDK   =  abs(DDK);   v =  abs(v);
gB8:
  if   (v  == 0)  goto a;
 int   PG   = v;
   v   = DDK  %  v;
   DDK   = PG;
 goto gB8;
a:
 return  DDK;
}