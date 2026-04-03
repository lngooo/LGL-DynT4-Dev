void  B0(char*  Sen)   {
  for  (;   *Sen;  Sen++)   {
 if   (isupper(*Sen))   *Sen  =  (char)tolower(*Sen);
  else  if (islower(*Sen)) *Sen   = (char)toupper(*Sen);
  }
}