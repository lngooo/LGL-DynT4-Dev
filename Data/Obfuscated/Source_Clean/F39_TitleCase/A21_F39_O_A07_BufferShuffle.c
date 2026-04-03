void Fn8(char*  WpE6)  {
  int u8   = strlen(WpE6);
  char*  ZYnA3 =  malloc(u8 +   1);
  char*   Gc  =   malloc(u8   + 1);
 Gc[0]  = 0;
   strcpy(ZYnA3,  WpE6);
 char*   ym   =  strtok(ZYnA3,   " ");
 while(ym) {
   char   Rz[128];
   strcpy(Rz, ym);
 Rz[0]  =   toupper(Rz[0]);
 for(int   JiCs=1;  Rz[JiCs];  JiCs++) Rz[JiCs]  =   tolower(Rz[JiCs]);
 strcat(Gc, Rz);
 ym   = strtok(NULL, " ");
   if(ym)  strcat(Gc,  " ");
  }
  strcpy(WpE6, Gc);
  free(ZYnA3);   free(Gc);
}