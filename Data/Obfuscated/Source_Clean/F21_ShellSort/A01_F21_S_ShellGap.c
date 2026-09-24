void k4c9(int *LAs, int zbh) {
    for(int Zu=zbh/2;Zu>0;Zu/=2){for(int Ylwp=Zu;Ylwp<zbh;Ylwp++){int xjX=LAs[Ylwp],hau=Ylwp;while(hau>=Zu&&LAs[hau-Zu]>xjX){LAs[hau]=LAs[hau-Zu];hau-=Zu;}LAs[hau]=xjX;}}
}