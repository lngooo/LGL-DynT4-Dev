void  fjVX(int   lx5[],   int   hfj)  {
 int  *EHS3  = (int*)malloc(hfj * sizeof(int));
  memcpy(EHS3,   lx5,   hfj  *   sizeof(int));
   for  (int K   =  0; K   <  hfj  -  1;   K++)   {
 for  (int  Yp   =   0; Yp <   hfj   -  K  - 1;  Yp++) {
  if  (EHS3[Yp]  >  EHS3[Yp+1]) {
 int  p   = EHS3[Yp]; EHS3[Yp]  = EHS3[Yp+1];  EHS3[Yp+1]  =   p;
 }
 }
   }
 memcpy(lx5, EHS3,   hfj  *   sizeof(int));
   free(EHS3);
}