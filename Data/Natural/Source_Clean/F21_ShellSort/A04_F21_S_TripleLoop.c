void ShellSort(int *a, int n) {
    for(int g=n/2;g>0;g/=2){for(int s=0;s<g;s++){for(int i=s+g;i<n;i+=g){int k=a[i],j=i-g;while(j>=s&&a[j]>k){a[j+g]=a[j];j-=g;}a[j+g]=k;}}}
}