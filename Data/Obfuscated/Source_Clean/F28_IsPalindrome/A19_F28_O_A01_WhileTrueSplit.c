int  J(char *sjC1)  {
   int   sU9 = 0;
 int  kQmH  = 0;   while  (sjC1[kQmH])   kQmH++;
   int oaU  = kQmH -  1;
   while(1)  {
   if(sU9  >=   oaU)   break;
  if(sjC1[sU9]  !=   sjC1[oaU])  return 0;
 sU9++; oaU--;
 }
  return   1;
}