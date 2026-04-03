void ueD(char*   pLV) {
  if (!*pLV)  return;
   *pLV  =   (*pLV   >=  'a'   &&   *pLV <=  'z') ?  (*pLV -  32)  : ((*pLV   >=   'A'   &&   *pLV <= 'Z') ? (*pLV +   32)   : *pLV);
   ueD(pLV  +  1);
}