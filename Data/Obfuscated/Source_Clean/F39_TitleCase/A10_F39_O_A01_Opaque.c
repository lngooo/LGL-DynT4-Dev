void  LqA(char* pb) {
   int FMCn7  =   15;
 if  ((FMCn7   * FMCn7)  >=   0) {
   int   x =  1;
   for  (int  Sj1  =   0;  pb[Sj1];  Sj1++) {
  if  (isspace(pb[Sj1]))  x = 1;
  else if   (x) {   pb[Sj1] = toupper(pb[Sj1]); x =   0;   }
 else  pb[Sj1] =   tolower(pb[Sj1]);
  }
 }
}