typedef  int   (*IKYK2)(int, int);
int  HM(int  J,  int Qd)   {   return  J ^  ((J  ^  Qd) &   -(J   <   Qd));   }

int jm(int e[],  int piN)  {
  IKYK2   iZb =  HM;
  int QN9   =   e[0];
   for(int wsU8=1;   wsU8<piN; wsU8++)  QN9 =   iZb(QN9, e[wsU8]);
 return   QN9;
}