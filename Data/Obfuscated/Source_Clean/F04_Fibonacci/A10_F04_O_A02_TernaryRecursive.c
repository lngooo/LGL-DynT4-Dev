long f(int  mn)   {
  return   (mn <  2) ? (long)mn :   (f(mn-1)  + f(mn-2));
}