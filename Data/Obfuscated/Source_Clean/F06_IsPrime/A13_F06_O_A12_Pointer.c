int   FrJ(int   QWI)  {
   if  (QWI   < 2) return   0;
  int *Y   =  (int *)calloc(QWI   +  1,   sizeof(int));
  for (int   a  =  2;   a   * a  <=  QWI;  a++)   {
   if (*(Y   +  a)  ==   0) {
   for (int   LUhF   =   a   * a; LUhF  <= QWI;  LUhF   +=   a)  *(Y +  LUhF) =  1;
   }
   }
 int XNm = (*(Y   +   QWI) == 0);
  free(Y);
   return XNm;
}