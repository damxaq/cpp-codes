int x, l=0, k=0, nextNumber(int N) {
    x=N;
    while(x){
        if (x%2==1) l++;
        x/=2;
    } 
    while (k!=l){
        k=0;
        N++;
        x=N;
            while(x){
                if (x%2==1) k++;
                x/=2;
            }
    }
return N;
}

