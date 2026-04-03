int g3(const char*  Y) {
   int K   =   0,  I   = 0;
   const  char* YrT0   =   "aeiouAEIOU";
  for(int  Tkz9=0; Y[Tkz9]; Tkz9++)   {
  if (strchr(YrT0,   Y[Tkz9]))  {
 if (Tkz9 % 2  ==  0) K++;  else I++;
   }
   }
  return  K   + I;
}