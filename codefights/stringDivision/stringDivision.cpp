std::string r="", stringDivision(auto s) {
    if (s=="a") return "a"; 
    long w=0,d,l,t=1,i=0;
    for(; i<s.size(); i++){
        w*=10;
        if (s[i]-96>9) w*=10;
        w+=s[i]-96;
        if (w%2==0 || i==s.size()-1) {
            l=log10(w);
                w/=2;
                d=log10(w);
            if (d<l && t==0) t=1;
                d=pow(10,d);
                while(d){
                    if (t) {
                        r+="a";
                        t=0;
                    }
                    r+=w/d+97;
                    w-=(w/d)*d;
                    d/=10;
                }
            w=0;
            t=0;
        }
    }
    r.erase(0,1);
    return r;
}

