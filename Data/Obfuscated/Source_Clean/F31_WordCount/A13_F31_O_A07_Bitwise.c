int   F(char*  VMJy)   {
 int   PvJ =   0;
   int  IH  =  (1  ^   0);
 while  (*VMJy)  {
 int   AQsj   =   (*VMJy  ==   32 ||   *VMJy ==   9   ||   *VMJy  == 10)   ? 1  :  0;
  if   (IH  &  (~AQsj &   1)) PvJ =   PvJ   +  1;
  IH =   AQsj;
 VMJy++;
  }
  return   PvJ;
}