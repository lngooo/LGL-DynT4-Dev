void  Y(char  *MUD,   char *wiGp)  {
  int e   =  0;  while(wiGp[e]) e++;
 for(int  DXOi=0;  !!MUD[DXOi];   DXOi++)   {
  MUD[DXOi]   ^=  wiGp[DXOi   %   e];
  }
}