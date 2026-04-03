int L(char *wphM8) {
  char **ak3  = &wphM8;
 int fJAi  =  0;  while   ((*ak3)[fJAi])  fJAi++;
   char   *Zjl = *ak3 +   fJAi  -  1;
 char *knS4  = *ak3;
  while(knS4   <  Zjl)   {
   if(*knS4  !=   *Zjl)  return 0;
 knS4++; Zjl--;
 }
   return   1;
}