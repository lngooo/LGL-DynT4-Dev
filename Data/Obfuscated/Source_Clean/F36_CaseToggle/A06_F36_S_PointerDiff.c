void   fZg6(char*   b3)  {
 char   *f2   =  b3;
 while   (*f2)  {
 char   YbPq  = *f2;
   if  (YbPq  >=  65  &&  YbPq   <= 90)   *f2  =  YbPq   + (97 - 65);
   else   if (YbPq   >= 97   &&  YbPq  <=  122)   *f2   =  YbPq -   (97   - 65);
 f2++;
  }
}