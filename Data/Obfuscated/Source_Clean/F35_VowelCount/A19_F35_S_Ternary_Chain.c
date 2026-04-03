int smRl5(const char* dPQ) {
 int   Hong   =  0;
   for (;   *dPQ; dPQ++) {
   char   Ja   = *dPQ;
   Hong   +=   (Ja=='a'?1:(Ja=='e'?1:(Ja=='i'?1:(Ja=='o'?1:(Ja=='u'?1:
   (Ja=='A'?1:(Ja=='E'?1:(Ja=='I'?1:(Ja=='O'?1:(Ja=='U'?1:0))))))))));
   }
  return Hong;
}