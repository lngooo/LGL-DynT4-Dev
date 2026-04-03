void yMU(int   *aBcJ,   int A)   {
   for(int oX=A/2;oX>0;oX/=2){for(int  *CO=aBcJ+oX;CO<aBcJ+A;CO++){int  kKbW=*CO,*Nw4=CO;while(Nw4>=aBcJ+oX&&*(Nw4-oX)>kKbW){*Nw4=*(Nw4-oX);Nw4-=oX;}*Nw4=kKbW;}}
}