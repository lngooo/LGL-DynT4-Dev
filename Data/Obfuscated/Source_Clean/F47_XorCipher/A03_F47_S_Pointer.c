void UBvO(char *adt,   char *OwC6)   {
   char   *qeF =   adt,  *M9  = OwC6;
  while   (*qeF)  {
 if   (!*M9)  M9  =   OwC6;
   *qeF   ^=   *M9;
   qeF++; M9++;
 }
}