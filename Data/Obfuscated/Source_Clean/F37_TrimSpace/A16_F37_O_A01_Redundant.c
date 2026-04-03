void  Al(char*   QFDP) {
  int   YQdK  =  0,  mOjg1  =   0;
 while   (QFDP[YQdK])   {
   int   K =  YQdK   +  mOjg1;
   if   (!isspace((unsigned char)QFDP[YQdK])) {
 if (K   >= 0) {
  QFDP[mOjg1]   =   QFDP[YQdK];
 mOjg1  = mOjg1   +  1;
   }
 }
 YQdK   =  YQdK  +  1;
 }
  QFDP[mOjg1]  =  (char)0;
}