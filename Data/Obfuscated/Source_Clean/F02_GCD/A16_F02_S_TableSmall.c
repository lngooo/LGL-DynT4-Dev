int   aBva(int   tGIG,  int  aQJ)  {
  tGIG =  abs(tGIG);  aQJ  =   abs(aQJ);
 if   (tGIG <=  3   && aQJ   <=   3) {
 static  int  ff3[4][4]  =   {{0,1,2,3},{1,1,1,1},{2,1,2,1},{3,1,1,3}};
  return ff3[tGIG][aQJ];
   }
 return   aQJ == 0  ?  tGIG   :  aBva(aQJ,   tGIG %   aQJ);
}