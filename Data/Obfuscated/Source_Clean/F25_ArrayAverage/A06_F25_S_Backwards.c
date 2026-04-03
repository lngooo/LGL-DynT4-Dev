double  djP(int   qn9[], int ol)   {
 if   (ol   <=   0) return 0.0;
 double  apnB4  =  0;
 for  (int hIW   = ol   -  1; hIW >= 0;   hIW--)  apnB4   +=   qn9[hIW];
 return   apnB4  /   (double)ol;
}