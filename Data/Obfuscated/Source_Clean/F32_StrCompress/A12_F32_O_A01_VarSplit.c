void T(char*   EFLD)   {
  int Qz  =  strlen(EFLD);
   int  XK  =   0,   f   =   0;
  while   ((XK   + f)  <   Qz)  {
  int  ToAj  = 1, LK6 = XK   +   f;
   while (LK6 +  1 <   Qz  && EFLD[LK6]  == EFLD[LK6   +  1]) {   ToAj++;   LK6++;   }
   printf("%c%d", EFLD[LK6], ToAj);
 int   onqJ2  = (LK6   +  1)   - (XK   +   f);
  XK +=   onqJ2;
   }
  printf("\n");
}