int  zW(int   hy[],   int iv)   {
  int wwFV  =   0;
  for  (int   E   = 0; E < iv; E++)  {
 int   BxKN   = 0;
 int  Yp  =   0;
 for  (; Yp  <= wwFV -   2;   Yp   += 2) {
 if (hy[E]   ==  hy[Yp]   ||   hy[E] ==   hy[Yp+1]) { BxKN  =  1;  break;   }
 }
 for (;  Yp <   wwFV; Yp++) if   (hy[E] ==   hy[Yp])   BxKN   =   1;
   if   (!BxKN)  hy[wwFV++] = hy[E];
 }
  return  wwFV;
}