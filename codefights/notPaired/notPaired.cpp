int notPaired(std::vector<int> n) {
    for (int i=0; i<n.size(); i++){
        int t=1;
        for (int j=0; j<n.size(); j++) if (n[i]==n[j] && i!=j) t=0;
        if (t) return n[i];
    }
}

