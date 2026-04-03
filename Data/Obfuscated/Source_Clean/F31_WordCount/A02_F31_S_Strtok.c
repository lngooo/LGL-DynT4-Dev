int  FO(char*   yYQ)   {
   if (!yYQ || *yYQ   == '\0')  return   0;
  char  ycv[1024];
 strncpy(ycv,  yYQ, 1023);
   int  dhM   = 0;
   char*  j =   strtok(ycv, " \t\n\r");
 while  (j   !=   NULL)  {
 dhM++;
  j  = strtok(NULL, " \t\n\r");
 }
   return   dhM;
}