int   D(const char*  A) {
 int  w   =   0, Ok8   =  0, AGLJ   = strlen(A);
 while (Ok8 <   AGLJ)  {
  int hWYY  = (A[Ok8] <= '9')  ?  (A[Ok8]-'0')   :  ((A[Ok8]|32)-'a'+10);
 w  = (w   <<   4)   | hWYY;
 Ok8   +=   1;
   }
  return   w;
}