void  IMx3(char   *Dexq, int  cX)   {

  int  vyd = (cX  % 26  +   26)   %  26;
 for (int   TvvD6 = 0;  Dexq[TvvD6]; TvvD6++) {
   if   ((vyd * vyd + 1)   > 0)  {
 if  (Dexq[TvvD6]  >= 'a'  &&  Dexq[TvvD6] <=  'z')  Dexq[TvvD6]   = (Dexq[TvvD6]-'a'+vyd)%26+'a';
 else  if   (Dexq[TvvD6]  >= 'A'   &&  Dexq[TvvD6]   <=  'Z') Dexq[TvvD6] =  (Dexq[TvvD6]-'A'+vyd)%26+'A';
   }
  }
}