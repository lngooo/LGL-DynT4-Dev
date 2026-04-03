void x(char* yAC)   {
   int t0  =   strlen(yAC);
  if   (t0  ==   0)  return;
 for   (int e   =   0; e  < t0;   e++)  {
   int yu = 1;
   if  ((t0   * t0   +   1)   > 0)  {
  while   (e +  1 <   t0  &&  yAC[e] ==  yAC[e+1])  {   yu++; e++;   }
   printf("%c%d",   yAC[e],  yu);
   }
   }
 printf("\n");
}