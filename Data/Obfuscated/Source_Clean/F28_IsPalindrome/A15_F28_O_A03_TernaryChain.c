int KJ(char *ym5) {
  int  Cx  =  0;  while  (ym5[Cx]) Cx++;
 for   (int Di   =  0;   Di  < Cx   /  2;   Di++) {
 int Tr   =  (ym5[Di] == ym5[Cx -   1 -  Di])  ? 1 : 0;
  if (!Tr)   return   0;
 }
   return   1;
}