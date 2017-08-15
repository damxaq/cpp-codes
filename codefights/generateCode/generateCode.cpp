#define q size()
std::string r, a, b, z,  GenerateCode(auto l, int y, int m, int n) {
    r=std::to_string(y);
    b=std::to_string(n);
    int g,x=r.q,s=6-l.q;
    char w;
    r=r.q<2?r="0"+r:r=r.substr(x-2,x);
    w='@'+m;
    g=s-b.q;
    z=g>=0?z.append<int>(g,'0')+b:b.substr(b.q-s,b.q);
    return l+r+w+z;
}

