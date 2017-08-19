std::vector<std::string> r, printPyramid(int c, bool d) {
int k=c;
    std::string n;
    while (c){
        n="";
        if (!d)
            for(int i=0; i<c; i++) n+="*";
        else
            for(int i=0; i<k-c+1; i++) n+="*";
        c--;
        r.push_back(n);
    }
    return r;
}

