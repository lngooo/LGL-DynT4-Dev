void   Zf(int sN[], int  ZT)  {
  for  (int m  = 0;   m <  ZT  -   1; m++) {
   for  (int  UrZc8 =   0;  UrZc8  < ZT  -   m  -   1; UrZc8++)   {
 if   (sN[UrZc8]  >   sN[UrZc8   +   1])   {
   int u   =   sN[UrZc8];
   sN[UrZc8] =  sN[UrZc8  +   1];
 sN[UrZc8 +  1] =  u;
  }
  }
   }
}