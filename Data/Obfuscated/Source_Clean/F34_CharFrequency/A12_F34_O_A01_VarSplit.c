int  YL(char*   K, char  S)   {
 int  JIYb8  =   0, N7 =  0;
   for (int  fWWV  =   0; K[fWWV];  fWWV++)   {
   if (K[fWWV]  == S) {
 if (fWWV  % 2  == 0) JIYb8++; else N7++;
  }
 }
   return   JIYb8 +   N7;
}