std::string r, decode2(std::string m) {
    
    for (int i=0,l,k; i<m.size(); i++){
        k=m[i]-96;
        
        l=(k*k)%26+96;
        if (k==26) l=122;

        r+=l;
    }

    
    return r;
}

