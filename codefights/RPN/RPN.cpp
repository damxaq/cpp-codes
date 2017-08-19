#define q(a,b) if (e[i]==a){ b; l--; r.pop_back(); } 

int t=0,l=0,i=0,RPN(auto e) {
    std::vector <int> r;
    
    for (; i<e.size(); i++)
        if (e[i] != 32){
            
            if (e[i]>47 && e[i]<58) {
                t+=e[i]-48;         
                if (e[i+1]>47 && e[i+1]<58) {
                t*=10;
                continue;
                } 
                r.push_back(t);
                l++;
            }
            q(43,r[l-2]+=r[l-1]);
            q(45,r[l-2]-=r[l-1]);
            q(47,r[l-2]/=r[l-1]);
            q(42,r[l-2]*=r[l-1]);
            q(94,r[l-2]=pow(r[l-2],r[l-1]));
            q(37,r[l-2]%=r[l-1]);
            t=0;
        }
    
return r[0];
}

