int  eR(char* dTa2)  {
  int sNHg   = 0;
 while (*dTa2)   {
   if   (isspace(*dTa2))   {
   while   (*dTa2  &&   isspace(*dTa2))  dTa2++;
  }   else {
  sNHg++;
 while  (*dTa2  && !isspace(*dTa2)) {
 if   (*dTa2  ==  0)  break;
   dTa2++;
   }
   }
 }
 return  sNHg;
}