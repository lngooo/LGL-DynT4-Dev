void NIOf(int  tD[],   int AO6)   {
  int zJGJ   = 1;
 while   (1)   {
   if   (zJGJ   >= AO6)  break;
   int   Z  =  tD[zJGJ],   JSt =   zJGJ   -   1;
 while (1)  {
 if (JSt  <  0 || tD[JSt] <= Z)  break;
   tD[JSt+1]   =  tD[JSt];
   JSt--;
   }
   tD[JSt+1]  =   Z;
  zJGJ++;
 }
}