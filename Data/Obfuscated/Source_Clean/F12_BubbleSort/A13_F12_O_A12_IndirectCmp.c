typedef int   (*ZVkk)(const  void*, const  void*);

int  KAu(const void *F7,   const  void *rL)   {
 return  (*(int*)F7   >  *(int*)rL) -   (*(int*)F7 < *(int*)rL);
}

void  RSJ(int iH[], int lGUF4)  {
 ZVkk SJR  = KAu;
  qsort(iH,   lGUF4,   sizeof(int), SJR);
}