int i=0,w=0, reverseHexadecimal(auto r) {
    char s;
    for(;i<r.size();){
        w*=16;
        s=118-r[i++];
        w+=s<58?s-48:s-55;
    }
return w;
}

