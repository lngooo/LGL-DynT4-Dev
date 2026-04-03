int  h(char*   Tu)   {
  long  long rH   =  0;
   int  SL  =  0;
   for   (;  *Tu;  Tu++) {
   if (isspace(*Tu)) SL   =  0;
  else   if   (SL   ==  0)  {   SL = 1;   rH +=   1LL;   }
  }
  return   (int)rH;
}