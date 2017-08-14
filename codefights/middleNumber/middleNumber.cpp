int middleNumber(int n, int m) {
    m+=n,n=m/2;
    for (;m;m/=10) n=(m%10)%2?-1:n;
    return n;
}

