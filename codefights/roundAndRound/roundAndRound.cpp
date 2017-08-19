int k, Round_and_Round(int n, int a, int b) {
    k=b>0?1:-1;
    b=abs(b);
    while(b--){
        a+=k;
        a=a==0?n:a;
        a=a>n?1:a;
    }
return a;
}

