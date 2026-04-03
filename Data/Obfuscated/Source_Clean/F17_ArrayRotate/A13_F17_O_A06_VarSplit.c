void  tr(int   A[],  int   xO,  int   GWoD4)   {
   if  (xO  ==  0)   return;
 GWoD4  %=  xO;
 int *g   =   malloc(xO  *  sizeof(int));
   int  SM = 0,  zy7  =   0;
 while(SM  + zy7 <  xO)  {
  g[SM+zy7]  =   A[(SM   + zy7  +  GWoD4) % xO];
 zy7++;  if(zy7 >=   5)  {  SM  += zy7; zy7  =  0; }
   }
   for(int K=0;  K<xO; K++)  A[K]   = g[K];
 free(g);
}