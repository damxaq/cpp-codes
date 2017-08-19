#define z int
#define q(g,h) for (z i=g; i<h; i++)
z squareRoots(z l, z k) {
    z t[l], b=1, r=0, p;
    q(1,l+1) t[i-1]=i;
    q(0,k) {
        p=l-b;
        q(p,l) p=t[i]>t[p]?i:p;
        if (b<l) b++;
        t[p]=(z)sqrt(t[p]);
    }
    q(0,l) r+=t[i];
    return r;
}

