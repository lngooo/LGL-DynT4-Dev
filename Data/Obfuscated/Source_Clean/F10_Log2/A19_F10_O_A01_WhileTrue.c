int   qzG(int   tK) {
   int   ivls4 =  0;
   if (tK  <=   1)  return  0;
  while (1)  {
  tK   /=  2;
  if (tK  ==  0)  break;
 ivls4++;
  }
  return  ivls4;
}