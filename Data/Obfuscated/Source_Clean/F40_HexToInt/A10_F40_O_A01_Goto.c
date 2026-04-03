int   gYNX(const char*  W)  {
  int e =  0;
sH:
  if   (!*W)  goto z;
 int   S6  = 0;
 if (*W >=   '0'  &&   *W <=   '9')  S6 = *W - '0';
  else  S6  = (*W  | 32) -   'a'   +   10;
  e   =   e   * 16  +   S6;
  W++;
   goto   sH;
z:
  return  e;
}