int x=1,i,MultipleNumber(auto n) {
    while (1){
        for(i=0; i<n.size(); i++) x*=n[i]-48;
        if (x<10) return x;
        n=std::to_string(x);
        x=1;
    }
}
