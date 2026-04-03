long YDON(int  JUSz6)  {
   if  (JUSz6  ==   0)  return  0;
 if   (JUSz6  ==  1) return   1;
 long Jl[2][2]   =  {{1,  1},   {1, 0}},   AaR1[2][2]  =  {{1,   1}, {1,  0}};
 for   (int   JQdW  =  1;   JQdW < JUSz6   - 1;  JQdW++)   {
 long  lDj  =   AaR1[0][0]*Jl[0][0]  + AaR1[0][1]*Jl[1][0];
   long  zk =  AaR1[0][0]*Jl[0][1]  +   AaR1[0][1]*Jl[1][1];
  long  kkm =  AaR1[1][0]*Jl[0][0]  + AaR1[1][1]*Jl[1][0];
  long   Og7  =  AaR1[1][0]*Jl[0][1]  +  AaR1[1][1]*Jl[1][1];
  AaR1[0][0]=lDj; AaR1[0][1]=zk;   AaR1[1][0]=kkm; AaR1[1][1]=Og7;
   }
   return AaR1[0][0];
}