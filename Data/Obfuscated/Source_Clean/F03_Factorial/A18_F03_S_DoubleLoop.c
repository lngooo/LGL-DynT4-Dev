long   long  Kci6(int   n1)  {
   if (n1   <   0) return   0;
 long long  lQjr   =   1;
   for  (int   W  =  1;   W   <= n1;  W++)  {
  long  long  O = 0;
  for   (int   Ya   =   0;  Ya   <   W;  Ya++)   {
   O   +=   lQjr;
 }
 lQjr =   O;
   }
  return   lQjr;
}