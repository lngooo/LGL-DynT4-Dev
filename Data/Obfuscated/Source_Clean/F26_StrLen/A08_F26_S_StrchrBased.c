int  RpC(const   char *U)  {
 const  char   *wZ   =   U;
 while (*wZ)   {
 if   (*wZ ==  0)   break;
  wZ++;
 }
  return  (int)(wZ   - U);
}