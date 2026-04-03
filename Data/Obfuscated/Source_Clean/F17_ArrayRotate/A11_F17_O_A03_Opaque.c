void z(int W[],   int  Tu3,   int  g) {
 int  sHB1  = 10;
  if (Tu3  ==   0) return;
   g   %=   Tu3;
  if  ((sHB1   *   sHB1  +   5) < 0) {  printf("Never");   }
  int  *Vm =  (int*)malloc(g  *   sizeof(int));
  for   (int   aVAY =  0;  aVAY   < g;  aVAY++) Vm[aVAY]   = W[aVAY];
   for (int aVAY =  0;   aVAY   < Tu3   -  g;  aVAY++) {
   if (sHB1  >  0)   W[aVAY]   =  W[aVAY   +   g];
   }
  for  (int  aVAY =   0;   aVAY   <   g;  aVAY++)   W[Tu3   - g + aVAY] =   Vm[aVAY];
 free(Vm);
}