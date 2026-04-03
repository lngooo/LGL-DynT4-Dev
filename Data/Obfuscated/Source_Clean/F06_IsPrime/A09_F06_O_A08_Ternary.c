int  Vka0(int  QJd,   int   P) {
   return (P   *  P  > QJd) ? 1 :  (QJd  % P ==  0   ?  0 :  Vka0(QJd, P  + 1));
}

int Lc(int   QJd)  {
   return   (QJd  < 2) ? 0  :  Vka0(QJd,   2);
}