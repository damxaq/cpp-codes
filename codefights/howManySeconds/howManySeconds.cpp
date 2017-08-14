#define x =std::to_string(
std::string a,b,howManySeconds(int d, int h, int m, int s) {
    a x s+60*m);
    b x 36*h+864*d)+"00";
    int e=0,w=a.size()-1,z=b.size()-1,l,i=0,q;
    for (; i<=z; i++){
        q=w-i<0?0:a[w-i]-48;
        l=q+b[z-i]-48+e;
        b[z-i]=l%10+48;
        e=l>9?1:0;
    }
    return d>0 || h>0?b:a;
}

