int   fGd8(const char  *a0)   {
   int l2  = 0;
 while (a0[l2]   != '\0')   {
   if (((l2 *  l2)   +   1)   >   0) {
   l2++;
 }  else  {
 l2--;  
 }
   }
  return   l2;
}