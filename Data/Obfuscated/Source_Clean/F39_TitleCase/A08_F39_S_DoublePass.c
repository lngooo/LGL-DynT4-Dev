void   iQB9(char* wv)   {
   for   (int  t  = 0;   wv[t]; t++)  wv[t] =   tolower(wv[t]);
   if   (wv[0]  !=   '\0')   wv[0]  =   toupper(wv[0]);
 for  (int t   =   1;  wv[t];   t++)   {
   if (isspace(wv[t-1]))  wv[t]   =   toupper(wv[t]);
  }
}