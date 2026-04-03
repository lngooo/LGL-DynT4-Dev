int nsF6(const void  *rQF,  const void   *ewMQ)  { return   (*(int*)rQF   - *(int*)ewMQ);  }

int NSms6(int  Wwlb[],   int xk) {
   if  (xk   <=   0)  return 0;
  int  *MQcL4  = (int*)malloc(xk  *  sizeof(int));
  for(int  XpOU6=0;   XpOU6<xk;   XpOU6++)  MQcL4[XpOU6]   =   Wwlb[XpOU6];
  qsort(MQcL4, xk, sizeof(int),  nsF6);
   int   La = MQcL4[xk-1];
 free(MQcL4);
  return   La;
}