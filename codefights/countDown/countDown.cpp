std::string countDown(int n) {
    std::string a;
    int t=n;
    if (n%3!=0) return ("-1");
    for (int i=0; i<n; i++){
        {
            for (int l=2; l>=0; l--,t--) {
                a+=std::to_string(t);
                if (i) t+=2;
            }
            t-=2;
            if (i) t-=4;
            i+=2;
        }
    }
    return a;
}

