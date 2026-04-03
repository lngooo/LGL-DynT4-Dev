int  y9(const   char* uEmv)  {
  int  W  =  0;
 while  (!!*uEmv)  {
  int E   = 0;
  if   (!(*uEmv  <   '0' ||   *uEmv > '9')) E   = *uEmv -   '0';
 else  E =   (*uEmv  | 32) -  'a'  +   10;
 W =  (W  *   16)  + E;
 uEmv++;
  }
  return  W;
}