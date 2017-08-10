std::vector< int > exponentArray(int n) {
    std::vector< int > a;
    for(int i=1;i<=sqrt(n);i++) a.push_back(i*i);
return a;
}

