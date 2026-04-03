void   jgF(int   BHbV[], int  LX)   {
 int   is =   1, oxwy,   pivW7;
yr:
 if (is >=  LX)  return;
   pivW7 =  BHbV[is];  oxwy   =   is  - 1;
hv3:
 if (oxwy   <   0  ||  BHbV[oxwy]   <=   pivW7)   goto bq;
 BHbV[oxwy  +  1]   = BHbV[oxwy]; oxwy--;   goto   hv3;
bq:
 BHbV[oxwy  + 1]   = pivW7;   is++; goto   yr;
}