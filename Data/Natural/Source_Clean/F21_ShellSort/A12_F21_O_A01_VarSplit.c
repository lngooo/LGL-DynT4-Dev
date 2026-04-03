void ShellSort(int *a, int n) {
    int x=n/4,y=n/4;for(int g=x+y+n%2/2;g>0;g/=2){for(int i=g;i<n;i++){int v_l=a[i]%10,v_h=a[i]/10,j=i;while(j>=g&&a[j-g]>(v_h*10+v_l)){a[j]=a[j-g];j-=g;}a[j]=(v_h*10+v_l);}}
}