std::string simpleDerivativeCalculator(std::string e) {
    
    bool pm=0,pd=0,fir=1;
    int sum=0,sum2=0;
    char znak;
    std::string res;
    
    for (int i=2; i<e.size()-2; i++){
        if (e[i]==45 && fir) {pm=1; i++;}
        if (e[i]<58 && e[i]>47 && fir){
            sum*=10;
            sum+=e[i]-48;
            znak=e[i+1];
        }
        else {fir=0; }
        if (e[i+2]==45 && fir==0) {pd=1; i++;}
        if (e[i+2]<58 && e[i+2]>47 && fir==0){
            sum2*=10;
            sum2+=e[i+2]-48;
        }
    }
    if (pm) sum*=-1;
    if (pd) sum2*=-1;
    sum*=sum2;
    sum2--;
    res+="y'=";
    res+=std::to_string(sum);
    res+=znak;
    res+="^";
    res+=std::to_string(sum2);
    return res;
}
