int t,d,w=0, changumangu223(int n) {
    d=n/2;
    t=n%2==0?0:1;
    while(d){
        if(d*2+t*3==n) w++;
        if (n-d*2>=t*3||n-d*2==3) t++; 
        d--;
    }
    return w+=n%3?0:1;
}

