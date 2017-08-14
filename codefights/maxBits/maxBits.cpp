int b(int n, int *j, int *d, int *i){
    *i=0;
    while (n)
        *j+=n%2?1:0,*d+=n%2?0:1,*i+=1,n/=2;
}

int maxBits(int n) {
    int j=0,d=0,i,x=0,y=0,s,r=n;
    b(n,&j,&d,&i);
    s=i;
    while (i==s) n++, b(n,&x,&y,&i), r=x==j&&y==d?n:r, x=0,y=0;
    return r;
}

