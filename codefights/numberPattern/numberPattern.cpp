#define q std::vector<
#define l std::string
#define y push_back
q l > NumberPattern( q int> n) {

    q l  > r;
    q int> t;
    q int> p;
    l x;
    int w=0;
    int s=n.size()-1;
    for (int i=0; i<s; i++) t.y(n[i+1]-n[i]);
    
    for (int i=1; i<s; i++){
        p.clear();
        for (int k=0; k<i; k++) p.y(t[k]);
        for (int j=0,a=0; j<s; j++,a++){
            if (a==i) a=0;
            if (t[j]!=p[a]) break;
            if (j==s-1 && w==0) w=i;
        }
    }    
    if (w==0) w=s;
    for (int i=0; i<w; i++){
        x.clear();
        if (t[i]>=0) x+="+";
        x+=std::to_string(t[i]);
        r.y(x);
    }
    return r;
}

