int E(int   VAa4)  {
   char   uZKo9[32];
  sprintf(uZKo9,  "%d", VAa4);
  if   (uZKo9[0]   ==   '-') {
 return  atoi(uZKo9 +   1);
   }
 return   VAa4;
}