void  Zqbw(char* kn) {
 while (*kn)  {
  if  ((*kn  >=   'a'  &&  *kn  <=  'z')   || (*kn   >= 'A'  && *kn  <=   'Z'))  {
  *kn  ^=   32;
  }
   kn++;
 }
}