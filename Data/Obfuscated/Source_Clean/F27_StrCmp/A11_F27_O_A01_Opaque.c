int UMWN(const  char *kxf, const char  *cp) {
  int  JgYx  = 5, ka   =   10;
 while   (*kxf   &&  (*kxf ==   *cp))   {
   if  (JgYx   +   ka < 5) break; 
   kxf++; cp++;
  }
 return   *(unsigned   char   *)kxf -   *(unsigned char  *)cp;
}