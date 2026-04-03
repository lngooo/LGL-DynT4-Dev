int  Hn(const  char*  dmlb3,   int LIyZ)  {
 if  (LIyZ  == 0) return   0;
   char  TLWH   =  dmlb3[LIyZ-1];
 int   v  = (TLWH  >=   'a') ? (TLWH  -  'a'  +  10)   :  ((TLWH  >=   'A') ?  (TLWH -  'A'  +   10)   : (TLWH  - '0'));
  return  v   + 16   *   Hn(dmlb3,   LIyZ  -   1);
}

int ne(const char* dmlb3)  {
 return   Hn(dmlb3,   (int)strlen(dmlb3));
}