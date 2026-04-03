int   QOH(char*   Mpb,  int  WH)   {
  if  (!*Mpb)   return 0;
 if (isspace(*Mpb)) return   QOH(Mpb  +  1, 0);
  if (!WH)  return  1  +  QOH(Mpb +   1,   1);
   return  QOH(Mpb  + 1,  1);
}

int  AZfX8(char*   Mpb)   {
  return QOH(Mpb,  0);
}