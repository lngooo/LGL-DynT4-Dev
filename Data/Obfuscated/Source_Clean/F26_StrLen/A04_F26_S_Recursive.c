int  Tk5(const  char  *g7)  {
   if  (*g7  == '\0') return   0;
   return 1 + Tk5(g7  +   1);
}