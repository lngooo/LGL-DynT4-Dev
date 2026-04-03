int A(int   E, int   exp) {
 int   p7   = 1;
   while (exp   >   0)   {
   if   (exp   %  2  == 1)  p7  *=  E;
   E  *= E;
   exp   /=  2;
 }
 return   p7;
}