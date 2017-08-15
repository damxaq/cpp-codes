int x,p,i, TrueValue(int n) {
    
    while (1){
        x=0;
        for (i=log10(n)+1; i>0; i--)
        {
            p=pow(10,i-1);
            x+=i*(n/p);
            n%=p;
        }
        n=x;
        if (x<10) return x;
    }
}

