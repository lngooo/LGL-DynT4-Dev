int tk(char*  D,  char*   pv)   {
   if  (strlen(pv) ==  0)  return 0;
  char*  N   = strstr(D,   pv);
  if   (N)   return  (int)(N - D);
 return   -1;
}