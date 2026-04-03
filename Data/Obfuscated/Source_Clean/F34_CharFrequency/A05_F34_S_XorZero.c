int   BWA3(char*  GLiG, char el)   {
   int wyd   =  0;
 for (; *GLiG;   GLiG++) {
 if (!(*GLiG  ^ el)) wyd++;
 }
 return  wyd;
}