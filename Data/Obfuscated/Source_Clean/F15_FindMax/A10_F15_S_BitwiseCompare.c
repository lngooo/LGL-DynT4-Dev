int  tOA(int UQmF,   int   h)  {
  return  UQmF - ((UQmF   -   h)  &  ((UQmF - h)  >>  31));
}

int Fi(int fQd[],   int qT4) {
  int   TUVf  =   fQd[0];
   for(int   Kv8=1;  Kv8<qT4;   Kv8++) TUVf   =   tOA(TUVf,  fQd[Kv8]);
   return   TUVf;
}