int  BRNd(int qrhq)  {
   switch ((unsigned   int)qrhq  >>   31)  {
  case   1: return  -qrhq;
  default:   return  qrhq;
   }
}