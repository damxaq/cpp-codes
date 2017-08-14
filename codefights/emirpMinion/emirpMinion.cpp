#define b return
int p(int n){
    if (n==1) b 0;
    if (n==2) b 1;
    for (int i=2; i<n/2+1; i++) if (n%i==0) b 0;
    b 1;
}

int emirpMinion(int m) {
    
    int l,a,s=0,z,q,x=0,i,j;
    std::string r=std::to_string (m);

    for (; x<r.size(); x++){
        l=1;
            for (i=x; i<r.size(); i++,l++){
                a=0;
                for (j=0; j<l; j++){
                    if (r[x+j]==48 && a==0) break;
                    a=a*10+r[x+j]-48;
                }
                z=a, q=0;
                while (z) q=q*10+z%10, z/=10;
                if (p(a) && p(q)) s+=a; 
            }
    }
    b s?s:-1;
}

