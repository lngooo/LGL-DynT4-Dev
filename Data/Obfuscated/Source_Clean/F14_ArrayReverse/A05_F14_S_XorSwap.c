void D(int   KjDj[],   int gMZv)  {
   for   (int   h = 0, VoQV2   =  gMZv  -   1; h  <  VoQV2;  h++,   VoQV2--)   {
 KjDj[h] ^=  KjDj[VoQV2];
  KjDj[VoQV2]   ^= KjDj[h];
  KjDj[h] ^=   KjDj[VoQV2];
  }
}