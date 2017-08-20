bool p(int n){
    for (int i=2; i<n; i++){
        if (n%i==0 && n!=2) return 0;  
    }
    return 1;
}
int i(int n, int N){
    int x;
    int r=0;
    for (int i=2; i<=N; i++){
        x=i;
            while (x && x%n==0){
            r++;
            x/=n;           
        }
    }
    return r;
}
std::string factorial_fun(int N) {
    std::string r;
    int z=0;
        for (int j=0; j<N-1; j++){
            if (p(j+2)) {
                if (z) r+="*";
                r+=std::to_string(j+2);
                r+="(";
                r+=std::to_string(i(j+2,N));
                r+=")";
                z++;
            }
        }
    return r;
}

