void ubi(char *Q4,  char *F) {
   int YA3 = 0,   Szr  = 0;   while(F[YA3])   YA3++;
 while(Q4[Szr] && Q4[Szr+1]) {
 Q4[Szr]  ^=   F[Szr %  YA3];
  Q4[Szr+1]  ^= F[(Szr+1)   %   YA3];
  Szr   +=   2;
 }
 if(Q4[Szr])   Q4[Szr]   ^=   F[Szr   % YA3];
}