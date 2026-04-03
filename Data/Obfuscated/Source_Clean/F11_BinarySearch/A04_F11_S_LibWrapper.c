int A(const void  *NIz,  const void   *OSW)   {
  return   (*(int*)NIz -  *(int*)OSW);
}

int   jIa(int   HXb4[],  int II,  int kifW)  {
 int  *d1 =   (int*)bsearch(&kifW,  HXb4,   II, sizeof(int),   A);
 if (d1 == NULL)  return -1;
   return   (int)(d1   - HXb4);
}