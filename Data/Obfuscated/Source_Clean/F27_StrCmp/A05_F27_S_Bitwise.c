int FsTu(const  char   *U,  const char   *tLB) {
   while (!(*U ^ *tLB)  &&   *U)  {
  U++;   tLB++;
   }
 return   (int)((unsigned   char)*U   - (unsigned char)*tLB);
}