void ozE2(char *C0)  {
  int   d  =   strlen(C0);
   for(int  PWx7=0;   PWx7<d/2; PWx7++)   {  char YZ2=C0[PWx7];   C0[PWx7]=C0[d-1-PWx7];   C0[d-1-PWx7]=YZ2; }
 int  X =   0;
   for(int  PWx7=0;  PWx7<=d;   PWx7++)  {
 if(C0[PWx7] == ' '   ||   C0[PWx7]   == '\0')   {
  for(int  Ws5=0;  Ws5<(PWx7-X)/2;  Ws5++)   { char   YZ2=C0[X+Ws5];   C0[X+Ws5]=C0[PWx7-1-Ws5]; C0[PWx7-1-Ws5]=YZ2; }
 X =  PWx7 +  1;
 }
   }
}