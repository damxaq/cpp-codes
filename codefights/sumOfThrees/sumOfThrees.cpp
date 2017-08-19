#define z "3^"+std::to_string(i-1);
#define q return
std::string w, sumOfThrees(auto n) {
    long m=3,i=0,s=0,x,l=std::stol (n);
    while (m<l) m=pow(3,i++);
    if (m==l) q z
    if (l==1) q "3^0";
    while (i){
        x=pow(3,i-1);
        if (x<=(l-s)) {
            s+=x;
            w+=z
            if (s!=l) w+="+";
        }
        i--;
    }
    if (s!=l) q "Impossible";
    q w;
}
