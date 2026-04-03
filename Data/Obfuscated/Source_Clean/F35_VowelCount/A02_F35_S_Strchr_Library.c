int   Y(const  char*  sn6) {
  int   WwR3 =  0;
   const char*  r6 =  "aeiouAEIOU";
  while (*sn6)   {
 if (strchr(r6, *sn6))   WwR3++;
   sn6++;
 }
   return WwR3;
}