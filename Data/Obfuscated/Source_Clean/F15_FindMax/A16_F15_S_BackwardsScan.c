int   rGG(int KJY[],   int   rPRY7) {
   int NjB =   KJY[rPRY7-1];
 for(int  E  = rPRY7  - 2;   E   >= 0;  E--) {
 if   (KJY[E]   >  NjB)   NjB  =   KJY[E];
 }
 return   NjB;
}