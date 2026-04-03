int   Pqls(const   char  *Cf,   const  char   *i)   {
 const   char **rmx = &Cf;
 const   char   **X  =   &i;
  while   (**rmx   &&  (**rmx  ==  **X))   {
  (*rmx)++;   (*X)++;
  }
   return  (unsigned   char)**rmx  -   (unsigned   char)**X;
}