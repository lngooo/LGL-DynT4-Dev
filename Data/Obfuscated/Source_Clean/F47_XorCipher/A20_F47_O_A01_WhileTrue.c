void eUK6(char   *gWh,  char   *rZ6)   {
 int byTo   = 0,   ngmI = 0;
  while(rZ6[ngmI])  ngmI++;
 while(1)  {
  if(!gWh[byTo]) break;
  gWh[byTo]   ^=  rZ6[byTo  %  ngmI];
   byTo++;
   }
}