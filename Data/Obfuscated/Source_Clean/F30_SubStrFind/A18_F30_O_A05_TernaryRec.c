int  qss(char*   Q, char* SWWe6,  int   IXSd3,   int  pl)  {
   return   (*Q  ==  '\0')  ? -1  : (strncmp(Q,  SWWe6,  pl)   == 0 ?  IXSd3  :   qss(Q + 1,  SWWe6, IXSd3  + 1,  pl));
}

int  R(char*  e,  char* G6) {
  int pl  = strlen(G6);
  return   (pl   ==   0) ?   0 : qss(e, G6, 0, pl);
}