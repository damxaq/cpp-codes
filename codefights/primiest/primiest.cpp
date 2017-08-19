#define q return

bool e(int a){
    if (a==1 || a==0) q 0;
    if (a==2) q 1;
    for (int i=2; i<a; i++) if (a%i==0) q 0; 
    q 1;
}
    
    int i=1, c=0, Primiest(int k) {
    if (k<=0 || k>70) q -1;
    for (; c<k; i++){
        int s=i, t=1;
        while (s>0){
            if (!e(s%10)) t=0;
            s/=10;
        }
        if (e(i) && t) c++;
    }
    if (i>10000) q -1;
    q --i;
}

