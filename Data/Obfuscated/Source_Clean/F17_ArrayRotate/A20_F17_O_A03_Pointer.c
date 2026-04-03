void  sR0(int S[],   int FWHl9,  int  tY)   {
 if  (FWHl9 ==  0)  return;
  tY  %=  FWHl9;
 int *PUe7 = malloc(tY *  sizeof(int));
   memcpy(PUe7,  S,  tY   *   sizeof(int));
   memmove(S, S +   tY, (FWHl9   -  tY) *  sizeof(int));
 memcpy(S  + (FWHl9   -  tY), PUe7,  tY  *  sizeof(int));
 free(PUe7);
}