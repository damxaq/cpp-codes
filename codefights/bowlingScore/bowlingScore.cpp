int p,i,l=1,bowlingScore(std::vector<int> r) {
    
    for(; i<r.size();i++){
        if (l>0 && r[i]==10) p+=30, l=r[i+1]==10?l*-1:l;  
        else p+=r[i];
        l*=-1;
    }
    return p;
}

