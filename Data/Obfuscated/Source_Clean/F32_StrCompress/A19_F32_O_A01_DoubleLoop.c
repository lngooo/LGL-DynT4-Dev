void   RNL(char*  n)  {
   int  ZrXh   = strlen(n);
   for (int  Qtyx   =   0;  Qtyx < ZrXh;  )  {
 int  gQwQ,   NUua6 =   0;
  char rux6  =  n[Qtyx];
 for   (gQwQ   = Qtyx;  gQwQ   <  ZrXh  &&  n[gQwQ]   ==  rux6; gQwQ++)  {
   NUua6++;
 }
 printf("%c%d",   rux6, NUua6);
  Qtyx   = gQwQ;
 }
 printf("\n");
}