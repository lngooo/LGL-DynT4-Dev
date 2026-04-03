void   oA3(int  w[],   int  E0,   int  CwL) {
  if  (E0 ==   0)   return;
 CwL   = CwL  % E0;
  int  *kSiq   =   (int*)malloc(CwL   *  sizeof(int));
   for   (int OCDJ =  0;  OCDJ  < CwL;   OCDJ++)  kSiq[OCDJ]  =  w[OCDJ];
   for  (int  OCDJ  = 0;   OCDJ <   E0  -   CwL; OCDJ++)   w[OCDJ]   =  w[OCDJ +   CwL];
   for (int   OCDJ  =  0;  OCDJ  < CwL;   OCDJ++) w[E0  -   CwL  +   OCDJ]  =  kSiq[OCDJ];
 free(kSiq);
}