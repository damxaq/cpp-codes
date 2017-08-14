int r=0,GroupedBits(int n) {
    
    for(;n;r+=(n%2 && (n/2)%2==0),n/=2);
    
    return r;
}

