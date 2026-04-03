int  wqhg(int   c1)  {
 int geM =   -1;
   unsigned  int U =  (unsigned int)c1;
   unsigned   int f = 1;
kcwZ:
   if   (f   >  U)  return geM;
 f *=  2;
 geM++;
 if  (f   == 0) return geM;
  goto kcwZ;
}