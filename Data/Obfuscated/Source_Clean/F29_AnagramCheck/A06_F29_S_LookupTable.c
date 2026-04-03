static   int  lL7[256];
int  Zwm9(char*   naX4,  char* hmp4) {
 memset(lL7,   0, sizeof(lL7));
   int   P   = 0;
 while(naX4[P]) {   lL7[(unsigned char)naX4[P]]++;  P++;  }
 P   = 0;
 while(hmp4[P])  {   lL7[(unsigned char)hmp4[P]]--;   P++;   }
  for(P=0;   P<256;   P++) if(lL7[P] !=  0) return 0;
   return   (strlen(naX4) ==  strlen(hmp4));
}