#define q std::vector <int>
#define f(a,b,c) for (int a=c; a<=b; a++)
#define s(a) sort (a.begin(), a.end())
int combinedScore(int a, int b, int c) {
    q x;
    q y;
    q z;
    f(i,25,0){
       f(j,25,0){
           if (j+i==10) y.push_back(j*c);
           f(k,25,0) if (i+j+k==25) x.push_back(j*b+k*a);
       }
    }
    s(x);
    s(y);
    for (int i=1; i<x.size(); i++) if (x[i]==x[i-1]) {
            x.erase(x.begin()+i-1);
            i--;
        }      
    
    f(i,x.size()-1,0){
        f(j,y.size()-1,0)
            z.push_back(x[i]+10*y[j]);
    }
    s(z);
    
        f(i,z.size()-1,1){
        if (z[i]==z[i-1]) {
            z.erase(z.begin()+i-1);
            i--;
        }      
    }
    return z.size();
}

