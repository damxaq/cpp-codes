char konw(int n){
    if (n>=10 && n<=19) return n+55;
    return n+48;
    
}
std::string Base20(int n) {
    std::string res;
    int pot,i=0,liczba,reszta;
    if (n==0) return "0";
    while (1){
        pot=pow(20,i);
        if (pot>n) {break;}
        i++;
    }
    while(i){
        pot=pow(20,i-1);
        liczba=n/pot;
        reszta=n%pot;
        n=reszta;
        i--;
        res+=konw(liczba);
        
    }
return res;
}

