void  cUxr(char*  wZLD)   {
 char *D5  =   wZLD, *KVz =   wZLD;
 while  (*D5)   {
  if  (*D5  !=   32  &&  *D5   !=   9  && *D5 !=  10 &&   *D5 !=   13) {
  *KVz =  *D5;
 KVz++;
   }
  D5++;
 }
  *KVz  = '\0';
}