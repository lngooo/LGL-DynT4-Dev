int   YFs(char* G,  char DwK)   {
   if   (*G == '\0')  return  0;
 return  (*G == DwK   ?   1   :   0) + YFs(G  +   1,   DwK);
}