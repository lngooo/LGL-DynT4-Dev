int  ij(char *Bytw) {
 if (!Bytw[0]  ||  !Bytw[1]) return   1;
  int qhj =   0; while  (Bytw[qhj])   qhj++;
   int  e5 =   (Bytw[0]  == Bytw[qhj-1]);
   if (!e5)   return   0;
 Bytw[qhj-1]   =  '\0';
  return  ij(Bytw  +   1);
}