#define x std::vector<int>
#define r return

bool q (int a){
    if (a<2) r 1;
    for (int i=2; i<a; i++){
        if (a%i==0) r 1;
    }
    r 0;
}

bool p(x t){
    for (int i=1; i<t.size(); i++){
        if (q(t[i-1])==q(t[i])) r 0;
    }
    r 1;
}

x simplifiedArray(x a) {
    x t;
    int s=0;
    for (int i=0; i<a.size(); i++){
        s=a[i];
        for (int l=i+1; l<a.size(); l++){
            if (q(a[l-1])==q(a[l])){
                s+=a[l];
                i++;
            }        
            else break;
        }
        t.push_back(s);
    }
    if (p(t)) r t;
    else r simplifiedArray(t);
}

