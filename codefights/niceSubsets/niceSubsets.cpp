int s=0,i=1, niceSubsets(int n) {
    for (; i<=2*n; i++) s+=i<n?i:0;
    return 2*n+1+s;;
}

