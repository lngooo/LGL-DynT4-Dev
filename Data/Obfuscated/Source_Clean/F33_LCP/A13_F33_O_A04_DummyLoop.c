void  YKb(char **Uh,   int e1,   char   *PvS6) {
   int  DLzJ8  =   0; while(Uh[0][DLzJ8])  DLzJ8++;
  for(int  UOxt=0;   UOxt<DLzJ8;   UOxt++) {
   int   SywW =  1;
  for(int EhU5=0;  EhU5<1; EhU5++)   {
   for(int  f=1; f<e1; f++)  if(Uh[f][UOxt]  !=   Uh[0][UOxt]) SywW  =  0;
   }
  if(SywW)   PvS6[UOxt] =   Uh[0][UOxt]; else   {  PvS6[UOxt]   = 0;  return;  }
 }
   PvS6[DLzJ8] =  0;
}