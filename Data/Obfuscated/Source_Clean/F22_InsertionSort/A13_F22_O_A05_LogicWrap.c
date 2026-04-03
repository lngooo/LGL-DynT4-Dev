void  e(int  E[],   int d) {
   int   rJ =  1;
  while   (rJ  <  d) {
   int WIw8   =  E[rJ],  GY  =  rJ -  1;
  while  (GY  >=   0)  {
 int tngp  =   (E[GY]   >   WIw8);
   if (tngp)   {  E[GY+1]  =   E[GY];  GY--;  }
 else  break;
   }
  E[GY+1]   = WIw8;
 rJ++;
   }
}