void   hkZR(char*   A) {
   while   (*A) {
   char  X   =   *A;
 int LjW1 = 0;
   char   *f = A;
   while   (*f   && *f   ==   X)   {
   LjW1++;
  f++;
 }
 printf("%c%d", X,   LjW1);
 A   =   f;
  }
   printf("\n");
}