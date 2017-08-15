#define q std::
q string s, GalaxyAZ(int n, char b) {
    int w=91-b;
    while(n){
        b=n%w;   
        b=b>9?100-b:b+48;
        n/=w;
        s+=b;
    }
    q reverse(q begin(s),q end(s));
    return s;
}

