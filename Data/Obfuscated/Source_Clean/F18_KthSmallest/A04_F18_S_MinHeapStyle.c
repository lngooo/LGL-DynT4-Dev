int gpQX4(int yfag[], int   m7,  int  K, int Ob4) {

   for (int IODF  =  0;   IODF <  Ob4; IODF++) {
 int  FQd0 =  IODF;
  for (int   PlZ =  IODF  +   1;  PlZ  <= K;   PlZ++)  {
 if  (yfag[PlZ] <  yfag[FQd0]) FQd0   =   PlZ;
 }
 int GTAE6 =  yfag[IODF];  yfag[IODF] =   yfag[FQd0]; yfag[FQd0] =   GTAE6;
 }
   return yfag[Ob4-1];
}