std::vector<int> r, GetDuplicates(std::vector<int> l) {
    int t[40000],i=0,j,y;
    for (; i<40000; i++) t[i]=1;
    for (i=0; i<l.size(); i++,y=0){
        for (j=i+1; j<l.size(); j++) if (l[i]==l[j]) y=1;
        if (y && t[l[i]]) {
            r.push_back(l[i]);
            t[l[i]]=0;
        }
    }
    return r;
}

