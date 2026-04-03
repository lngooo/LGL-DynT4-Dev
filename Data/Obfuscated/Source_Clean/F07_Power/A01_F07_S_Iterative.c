int   Za(int Vd,  int   exp) {
   int  ph  = 1;
   for (int   mRch   = 0;  mRch   < exp; mRch++) {
  ph *= Vd;
 }
 return ph;
}