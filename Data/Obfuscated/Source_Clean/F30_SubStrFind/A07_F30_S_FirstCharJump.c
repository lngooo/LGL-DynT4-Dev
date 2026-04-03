int  s6(char*   VCV4,   char*   tKA)  {
   char*  GhS  =   VCV4;
 int  a  = strlen(tKA);
   if (a ==   0)   return 0;
 while  ((GhS = strchr(GhS,   tKA[0]))  !=   NULL)   {
  if (strncmp(GhS, tKA,  a) ==  0)   return  (int)(GhS  -   VCV4);
  GhS++;
   }
 return   -1;
}