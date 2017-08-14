int i=0, RandomNumbers(int p) {
    std::vector <int> t;
    t.push_back(0);
    t.push_back(1);
    while (1){
        t.push_back((t.back()+t[t.size()-2])%p);
        i++;
        if (i>2 && t.back()==1 && t[t.size()-2]==0) break;
    }
    if (p%5==0 || p%5==1 || p%5==4) i=(p-1)/i; 
    if (p%5==2 || p%5==3) i=(2*p+2)/i;
    return i;

}

