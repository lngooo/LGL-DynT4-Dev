void  R3(char  **Z,  int   kq3,  char *QmX2) {
   if (kq3  <=  0)   return;
   strcpy(QmX2,   Z[0]);
 for  (int U =   1;   U  < kq3;   U++)   {
  int  GQl  =  0;
 while   (QmX2[GQl]  &&   Z[U][GQl] &&  QmX2[GQl]  ==   Z[U][GQl])  GQl++;
 QmX2[GQl]  =   '\0';
   }
}