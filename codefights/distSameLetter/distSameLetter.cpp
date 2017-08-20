#define q std::string
q distSameLetter(q s) {
    int m=0,a,e;
    char t=s[0];
    q r;
    for (int i=0;i<s.size();i++){
        a=i;
        for (int l=i;l<s.size();l++)
            if(s[i]==s[l]) e=l;
        if (e-a>m){
            m=e-a;
            t=s[i];
        }
    }
    r+=t+std::to_string(m+1);
    return r;
}

