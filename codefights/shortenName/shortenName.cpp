std::string r, ShortenName(auto n) {
    int i=0,l=0,j=0,q=n.size();
    for (; i<q; i++) if (n[i]==' ') l++; 

        for (i=0; i<q; i++){
            r+=n[i];
        if (n[i]==' ') j++; 
            if (j==l) {
                r+=n[i+1];
                break;
            }
    }
    return l==1?n:r+'.';

}

