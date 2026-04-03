int CkP(const  void* jqeQ, const void*   UUWT)   {   return  (*(char*)jqeQ   - *(char*)UUWT);   }

int Au1(char*  flRl,   char*   L)  {
 int  RQ =  strlen(flRl), LHGL3   = strlen(L);
  if   (RQ   != LHGL3)   return   0;
   qsort(flRl,   RQ,  1,   CkP);
 qsort(L,   LHGL3,   1,  CkP);
 return  memcmp(flRl, L, RQ) == 0;
}