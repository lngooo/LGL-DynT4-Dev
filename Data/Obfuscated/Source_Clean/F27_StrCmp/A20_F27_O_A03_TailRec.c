int qH3(const  char *qa, const char *i)   {
 return (*qa ==   '\0'  ||  *qa  !=  *i)   ?   (*(unsigned char*)qa  -   *(unsigned  char*)i)   :  qH3(qa+1, i+1);
}

int   KO(const  char *qa, const   char *i) {
   return qH3(qa, i);
}