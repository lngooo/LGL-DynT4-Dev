void ShellSort(int *a, int n) {
    for(int g=n/2;g>0;g/=2){for(int i=g;i<n;i++){int t=a[i],j=i;while(j>=g){if(a[j-g]>t){a[j]=a[j-g];j-=g;}else break;if(j>=g&&a[j-g]>t){a[j]=a[j-g];j-=g;}else break;}a[j]=t;}}
}