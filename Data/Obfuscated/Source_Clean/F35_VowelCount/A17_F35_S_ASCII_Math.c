int   hrDm(const char* B)   {
  int  qdDi   =  0;
   while (*B)   {
  int  Ipf1 =   (unsigned   char)*B;
  if   (Ipf1  == 97 ||   Ipf1   ==   101 ||  Ipf1   ==   105  ||   Ipf1 ==  111   || Ipf1 ==   117  ||
   Ipf1 ==  65  || Ipf1  ==   69   || Ipf1 ==  73  || Ipf1 ==  79  ||  Ipf1  ==  85)  qdDi++;
 B++;
 }
   return qdDi;
}