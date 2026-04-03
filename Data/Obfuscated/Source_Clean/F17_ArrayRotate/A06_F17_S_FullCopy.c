void   ZItA(int  h[],   int  gPXe, int hLua9) {
  if  (gPXe == 0) return;
   hLua9 =  hLua9 %  gPXe;
 int *oW  = (int*)malloc(gPXe  *   sizeof(int));
  for (int zcut   =  0;   zcut   <   gPXe;  zcut++)   {
  oW[zcut] =  h[(zcut + hLua9)  % gPXe];
  }
 for (int   zcut  =   0; zcut  < gPXe; zcut++) h[zcut]   = oW[zcut];
   free(oW);
}