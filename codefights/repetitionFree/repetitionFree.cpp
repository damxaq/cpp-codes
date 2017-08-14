#define r return
int p(int l){
    int t[10]={1};
    for(;;l/=10){
        if (l<10 && !t[l%10]) r 1;
        if (t[l%10]) r 0;
        t[l%10]=1;
    }
}

int i=0,s=0, repetitionFree(int n) {
    if (n>19750) r -1;
    for(;n;) if (p(++i)) n--,s+=i;
    if (!p(s)) while(!p(s)) s++;
    r s;
}

