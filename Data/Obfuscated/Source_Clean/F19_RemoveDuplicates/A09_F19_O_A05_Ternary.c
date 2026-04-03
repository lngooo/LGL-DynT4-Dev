int  XnzH(int e[], int   aln)  {
 int   uP =   aln;
  for   (int   yyGr4  =   0;   yyGr4  < uP; yyGr4++)   {
   for  (int  gl9  =   yyGr4   +   1;   gl9   < uP;  gl9++)   {
   int   gg  =  (e[yyGr4]  == e[gl9]);
  if   (gg)   {
   for (int   yOxn   = gl9;   yOxn  < uP -   1;   yOxn++) e[yOxn] =  e[yOxn  +  1];
 uP--;  gl9--;
   }
   }
   }
   return  uP;
}