void   e(int  juz6[], int   T,   int V)   {
   if (T <  V)   {
 int  u0 =   juz6[V], JWp2 =   T -  1;
 for  (int   RjVt1 =  T;   RjVt1  < V; RjVt1++)  {
   double  ioxY  =  (double)juz6[RjVt1]   -  (double)u0;
 if  (ioxY <   0.0)   {  JWp2++;  int C   =  juz6[JWp2];  juz6[JWp2]   =   juz6[RjVt1];   juz6[RjVt1]   =  C; }
  }
   int M   =   JWp2  +  1;
 int  C   =  juz6[M];  juz6[M]  = juz6[V]; juz6[V] =   C;
 e(juz6,   T,   M -   1);
 e(juz6,   M + 1, V);
 }
}