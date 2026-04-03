void  H(char **U,  int   Vy, char   *W2)  {
   if (Vy <=   0) return;
  if ((Vy   *   Vy  + 1) > 0)   {
  if (Vy == 1) {   strcpy(W2,  U[0]);  return; }
   char en6[128]={0},  XXe7[128]={0};
  H(U, Vy/2, en6);   H(U+Vy/2, Vy-Vy/2,   XXe7);
  int rVc=0;   while(en6[rVc] &&  XXe7[rVc]   &&   en6[rVc]==XXe7[rVc]) {  W2[rVc]=en6[rVc];   rVc++; }
  W2[rVc]='\0';
 }
}