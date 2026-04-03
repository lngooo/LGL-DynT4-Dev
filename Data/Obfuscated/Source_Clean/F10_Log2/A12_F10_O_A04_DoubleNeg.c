int LxuN(int  DoZS9) {
  int  T = 0,   S   =   31, p  = 0;
 while (!!(T <=   S)) {
  int   ft   =   T  +  (S -   T)   /  2;
 if   (!!((1ULL   << ft) <= (unsigned  int)DoZS9))   {  p = ft;  T  =  ft  + 1; }
   else S   = ft  -   1;
  }
   return  p;
}