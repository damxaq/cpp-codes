std::string s,w, z(int l){

    s="";
    w="  ";
    if (l==0) return "00";
    while(l){
        s+=l%16>9?l%16+55:l%16+48;
        l/=16;
    }
    w[0]=s[1];
    w[1]=s[0];
    return w;
}

std::string r, RGBtoHex(std::vector<int> g) {
    
    r="#";
    r+=z(g[0]);
    r+=z(g[1]);
    r+=z(g[2]);
    if (r[1]==r[2] && r[3]==r[4] && r[5]==r[6]){
        r.erase(5,1);
        r.erase(3,1);
        r.erase(1,1);
    }
    return r;
}
