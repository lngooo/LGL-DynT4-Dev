void   W4(char **fuu,  int   k3,   char *osD)  {
   if  (k3  <=   0)  return;
  int   p   =   0;
 while  (fuu[0][p])   {
  char A   = fuu[0][p];
 for   (int   Ryn   =  1; Ryn  < k3;  Ryn++)   {
  if   (fuu[Ryn][p]  !=   A)   { osD[p]  =  '\0';   return;   }
  }
  osD[p] =  A;
 p++;
 }
  osD[p] = '\0';
}