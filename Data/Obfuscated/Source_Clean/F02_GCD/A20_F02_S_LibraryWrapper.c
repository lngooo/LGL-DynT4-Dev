static inline int  Av6(int qm5,  int jHKH)   {
  return jHKH  ==   0   ?  qm5   :   Av6(jHKH, qm5   % jHKH);
}

int  zh(int   GTXz6,  int   vzKx9) {
   return  Av6(abs(GTXz6),   abs(vzKx9));
}