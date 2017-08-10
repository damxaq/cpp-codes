bool Armstrong_number(int N) {
    int l=log10(N)+1;
    int s=0,m=N;
    while(m){
        s+=pow(m%10,l);
        m/=10;
    }
    if (s==N) return true;
    return false;
}

