int Hkb(char* BoSi0, char* DVQn2)  {
 if  (strlen(BoSi0)   !=  strlen(DVQn2))   return 0;
 long   long   kKVS  = 0,  WVC =   0;
  for (int gA2  = 0;   BoSi0[gA2];  gA2++) {
  kKVS  ^= (long long)BoSi0[gA2];   kKVS  ^= (long   long)DVQn2[gA2];
  WVC   +=   (long long)BoSi0[gA2];   WVC   -=  (long  long)DVQn2[gA2];
   }
  return  (kKVS   ==   0LL && WVC  == 0LL);
}