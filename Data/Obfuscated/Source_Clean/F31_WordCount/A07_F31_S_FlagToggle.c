int   bVqu7(char* WMy) {
  int   I  =  0;
   int oh   = 1;
  for (; *WMy;   WMy++) {
   int  heo =  (*WMy ==   ' ' ||   *WMy  == '\t'  ||  *WMy ==  '\n');
   if  (oh   &&   !heo)   I++;
 oh = heo;
  }
   return  I;
}