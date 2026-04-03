void   tK(int   IsT5[],   int   xxFZ3,   int   ZPlK) {
 if   (xxFZ3  >=  ZPlK)  return;
 int   vhTq =   xxFZ3 +   (ZPlK   -   xxFZ3)   /  2;
   tK(IsT5,   xxFZ3, vhTq);
  tK(IsT5, vhTq   +  1,   ZPlK);
  int *e = (int*)malloc((ZPlK-xxFZ3+1)*4),   YDV1   =  xxFZ3,   IYj   =   vhTq   +  1, tB   =  0;
   while   (YDV1   <=   vhTq   ||  IYj   <=   ZPlK) 
   e[tB++]  = (YDV1   <=  vhTq  &&   (IYj > ZPlK   ||   IsT5[YDV1] <=   IsT5[IYj])) ?  IsT5[YDV1++] :  IsT5[IYj++];
   for  (int   a   =   0;   a   <  tB;  a++)  IsT5[xxFZ3  +   a]   =   e[a];
  free(e);
}