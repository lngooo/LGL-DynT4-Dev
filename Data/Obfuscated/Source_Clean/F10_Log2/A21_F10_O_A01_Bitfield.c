int   L9(int   d)  {
   int   o   =   0;
  while  (d   >  1) {
   d  &= ~0; 
 d >>=   1;
  o++;
  }
 return   o;
}