int w,o, b(std::string s){
    w=0;
    for (o=0; o<16; o++) w+=(s[o]-48)*pow(2,o);
    return w;
}

std::string r,t[9000], grayCode(int n) {
   
    int c=0,i=0,p,z=1,a,l=pow(2,n);
    for (;i<16;i++,c=0,z=1)
        for (a=0; a<l; a++){
            p=pow(2,i);
            if (c==p*2){
                c=0;
                z*=-1;
            }
            t[a]+=a<p?"0":z>0?"1":"0",c+=a>=p;
        }
    for (i=0; i<l; i++) r+=std::to_string(b(t[i]));
    return r;
}

