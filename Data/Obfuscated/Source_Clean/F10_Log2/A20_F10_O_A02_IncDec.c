int So(int vi1) {
 if   (vi1   < 2) return 0;
  int D   = So(vi1  >>   1);
  return   ++D;
}