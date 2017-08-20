int offer(int n, std::vector< int > p) {
    std::sort(p.begin(), p.end());
    std::reverse(p.begin(), p.end());
    int s=0;
    for (int i=0; i<=n/3; i++){
        if (3*i<n) s+=p[3*i]+p[3*i+1];
    }
return s;
}

