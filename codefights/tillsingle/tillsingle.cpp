int tillsingle(std::string n) {

    int p=0,d=0,r=0;
    bool k=1;
    for (int i=0; i<n.size(); i++){
        if (n[i]==94) {
            k=0;
            i++;
        }
        if (k) {     
            p*=10;
            p+=n[i]-48;
        }
        else {
            d*=10;
            d+=n[i]-48;
        }
    }
    long w;
    if (!k) w=pow(p,d);
    else w=p;
    while (1){
        int s=log10(w)+1;
        for (int i=0; i<s; i++){
        r+=w%10;
        w/=10;
        }
        w=r;
        r=0;
        if (w<10) return w;
    }
}

