void  dRKS7(char*  xmXy2)  {
 int Zzpv2   =   1;
   for   (int Is   =   0;   xmXy2[Is] !=   '\0';   Is++)  {
   if (isspace(xmXy2[Is])) {
 Zzpv2  =   1;
  }   else  if (Zzpv2)  {
 xmXy2[Is]   =   toupper(xmXy2[Is]);
 Zzpv2  =  0;
  } else {
  xmXy2[Is] =  tolower(xmXy2[Is]);
  }
   }
}