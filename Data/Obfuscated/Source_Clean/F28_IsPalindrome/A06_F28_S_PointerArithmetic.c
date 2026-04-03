int M(char *B8)   {
  char *jlg  =   B8;
   while (*jlg) jlg++;
 jlg--;
 while   (B8  < jlg)  {
 if   (*B8  !=  *jlg) return   0;
 B8++;  jlg--;
  }
  return  1;
}