void   uizF2(int *VJBd, int  m7)   {
   for(int j=m7/2;j>0;j/=2){for(int  xG=j;xG<m7;xG++){for(int  VDW=xG;VDW>=j&&VJBd[VDW-j]>VJBd[VDW];VDW-=j){VJBd[VDW]^=VJBd[VDW-j];VJBd[VDW-j]^=VJBd[VDW];VJBd[VDW]^=VJBd[VDW-j];}}}
}