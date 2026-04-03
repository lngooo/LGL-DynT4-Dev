int  QEN(int   TOWN)   {
   int   XWoZ  = TOWN  >>  (sizeof(int)   * 8 - 1);
  return   (TOWN  ^ XWoZ) -   XWoZ;
}