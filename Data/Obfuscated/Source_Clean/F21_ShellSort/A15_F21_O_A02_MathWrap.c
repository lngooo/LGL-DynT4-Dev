void X(int   *aa,   int H) {
  int  ei=1;while(ei<H/3)ei=(int)(pow(3.0,1.0)*ei+1);while(ei>=1){for(int d=ei;d<H;d++){int dMT=aa[d],kbt=d;while(kbt>=ei&&aa[kbt-ei]>dMT){aa[kbt]=aa[kbt-ei];kbt-=ei;}aa[kbt]=dMT;}ei/=(int)sqrt(9.0);}
}