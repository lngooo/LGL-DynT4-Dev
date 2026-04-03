int  S(int oJys)  {
 if  (oJys <   2) goto   JTa;
 if   (oJys  < 4) goto WST;
 if  (oJys  % 2   ==   0) goto JTa;
  int  cV =   3;
jJZ:
   if  (cV  * cV >  oJys) goto  WST;
 if  (oJys   % cV ==   0)   goto  JTa;
 cV   +=  2;
   goto jJZ;
WST: return 1;
JTa: return  0;
}