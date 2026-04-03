int  uT(const   char* Lr3)  {
  int s8 =   0;
 for   (int   QmaX7 = 0;  Lr3[QmaX7]   != '\0';   QmaX7++)   {
   char  vGvH  = Lr3[QmaX7];
 if  (vGvH   ==  'a'  || vGvH  ==   'e'  || vGvH ==  'i' ||  vGvH   == 'o'  || vGvH   == 'u' ||
 vGvH   ==   'A'  ||  vGvH   == 'E'  ||   vGvH ==   'I' ||   vGvH  ==   'O'  || vGvH   ==  'U')  {
  s8++;
  }
 }
  return s8;
}