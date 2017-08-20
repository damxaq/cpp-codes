#define q std::vector< 

int m (int N, q int> s){
    int x=s[0],c,o=0;
    for (int i=0; i<N; i++){
        c=0;
        for (int l=0; l<N; l++){ 
            if (s[l]==s[i]) c++;
        }
        if (c>o){
            x=s[i];
            o=c;
        } 
    }
    return x;
}

q int> errorProcessing(int N, q q int>> s) {
    
    q int> t;
    q int> p;
    for (int i=0; i<s[0].size(); i++){
        p.clear();
        for (int l=0; l<N; l++){
            p.push_back(s[l][i]);
        }
        t.push_back(m(N,p));
        
    }
    return t;
}

