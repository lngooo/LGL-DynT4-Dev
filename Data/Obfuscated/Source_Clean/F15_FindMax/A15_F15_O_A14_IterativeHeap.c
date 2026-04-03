int   M(int QeF[], int   RZef) {
   int   *Mx =  (int*)malloc(RZef  *  sizeof(int));
 for(int  wqpx=0;  wqpx<RZef;  wqpx++)   Mx[wqpx] =   QeF[wqpx];
   for  (int wqpx = 1;  wqpx <  RZef; wqpx++) {
 int   AIoy  =  wqpx;
 while  (AIoy  >  0)  {
 int ISRC9   =   (AIoy -  1)  /   2;
   if   (Mx[AIoy]  > Mx[ISRC9])  {  int  vYE9  = Mx[AIoy]; Mx[AIoy] =  Mx[ISRC9];   Mx[ISRC9]  =  vYE9; AIoy =   ISRC9;   }
 else   break;
 }
   }
  int   o3 =  Mx[0];
 free(Mx);
   return   o3;
}