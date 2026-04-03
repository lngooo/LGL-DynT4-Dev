uint32_t GMlg(uint32_t   yYp) {
 uint32_t  QM = 0;
 for   (int   yptE =   0; yptE   <   4;  yptE++) {
  QM =   (QM   << 8)   |  (yYp  & 0xFF);
 yYp  >>=   8;
   }
 return QM;
}