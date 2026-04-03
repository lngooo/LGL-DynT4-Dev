static  char KvM3[4096];
void  oF(char* mQ1)   {
 int  iQB = 0;
   char   *XrO  =   mQ1;
   while   (*XrO) {
 if  (*XrO != ' ' &&  *XrO   != '\t'  &&   *XrO  !=   '\n')   {
 *(KvM3   +   iQB) =  *XrO;
   iQB++;
  }
 XrO++;
   }
 *(KvM3  + iQB)  = '\0';
  strcpy(mQ1, KvM3);
}