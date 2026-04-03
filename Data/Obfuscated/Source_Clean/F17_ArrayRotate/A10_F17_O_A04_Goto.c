void  jF9(int  pMcV[],   int y,   int  Y)   {
   if  (y == 0)  return;
  Y  %=  y;
   int  s  =   0,  lQKR;
Lt:
  if   (s >= Y) goto oTb;
  int P   =   pMcV[0];
  lQKR  = 0;
t:
  if   (lQKR >= y   -   1)  goto m;
 pMcV[lQKR] = pMcV[lQKR +   1];
  lQKR++;
  goto t;
m:
  pMcV[y   - 1]   =   P;
  s++;
 goto  Lt;
oTb:
  return;
}