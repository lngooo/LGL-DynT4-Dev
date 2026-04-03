void   ShJw6(char*   sgI)  {
  int  QU =  0, SYg8  = 0,  xEj5 =  0;
   while   (sgI[QU])  {
  if  (!isspace((unsigned   char)sgI[QU]))   {
 sgI[SYg8  +   xEj5]   =  sgI[QU];
  if (xEj5   <   10) xEj5++;
   else {  SYg8 += xEj5;   xEj5   =  1;   }
 }
 QU++;
   }
  sgI[SYg8 + xEj5] =  '\0';
}