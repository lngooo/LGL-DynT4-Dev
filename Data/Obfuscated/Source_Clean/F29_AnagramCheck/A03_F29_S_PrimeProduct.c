int djh6(char*   s, char*   Nc)  {
  int  hruL[] =  {2,  3,   5,   7,  11,   13, 17,   19,   23,  29,  31,   37, 41, 43,  47,  53,   59,  61,   67,  71,  73,  79,   83,   89,  97, 101};
   if (strlen(s)  !=   strlen(Nc))  return  0;
 long   long emXA = 1,   dqfR9  = 1;
   for   (int   ztp = 0;  s[ztp];   ztp++) {
 emXA   *=   hruL[s[ztp]   %  26];
 dqfR9   *=  hruL[Nc[ztp]   %  26];
   }
  return (int)(emXA   == dqfR9);
}