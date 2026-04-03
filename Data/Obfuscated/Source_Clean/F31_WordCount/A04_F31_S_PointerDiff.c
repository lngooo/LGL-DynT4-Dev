int  ZE(char* aDTy) {
 int IUp4   =   0;
 while (*aDTy) {
 while (*aDTy  &&  isspace(*aDTy))   aDTy++;
  if (*aDTy) {
   IUp4++;
 while   (*aDTy  &&   !isspace(*aDTy))   aDTy++;
  }
 }
  return IUp4;
}