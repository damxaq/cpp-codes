std::vector<int> res, Near_Square(int n) {
    
    int min=n;
    for (int i=1; i<sqrt(n)+1;i++){
        if (n==n/i*i && abs(n/i-i)<min) {
            res.clear();
            res.push_back(i);
            res.push_back(n/i);
            min=n/i-i;
        } 
        
    }
    return res;
}

