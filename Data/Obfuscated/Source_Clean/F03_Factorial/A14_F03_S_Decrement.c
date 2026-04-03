long long   b5(int  U)  {
 if (U  <   0)   return  0;
 long long aa  =  1;
  while   (U   >   1)   {
  aa  *=   U--;
 }
  return  aa;
}