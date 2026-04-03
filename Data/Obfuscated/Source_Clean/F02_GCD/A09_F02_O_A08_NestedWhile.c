int LW(int  Agk7,   int   IKC4)  {
  Agk7   = abs(Agk7);   IKC4 = abs(IKC4);
  while  (Agk7   !=   IKC4)  {
   while  (Agk7  >   IKC4) Agk7 -=  IKC4;
   while (IKC4  >  Agk7)   IKC4   -=  Agk7;
 if   (Agk7   ==   0 || IKC4  ==   0) break;
 }
   return (Agk7  == 0) ?  IKC4   : Agk7;
}