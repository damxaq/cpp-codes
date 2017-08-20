#define q std::vector<int>
#define b for (int
q vietasFormulas(q o) {
    int s=o.size();
    int t[s+2],r[s+2];
    q w;
    t[0]=1;
    r[0]=1;
    
    b i=0; i<s; i++) t[i+1]=-1*o[i];
    
        b i=2; i<s+1; i++){
            b j=1; j<i; j++) r[j]=t[j-1]*t[i]+t[j];
            r[i]=t[i-1]*t[i];            
            b j=1; j<=i; j++) t[j]=r[j];
        }
      b i=0; i<s+1; i++) w.push_back(r[i]);
    return w;
}

