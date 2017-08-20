#define k for (int i=0; i<l.size(); i++){
int closestNeighbor(std::vector<int> l) {
    int m,a=0,r=l[0],q=l.size();
    k
        for (int j=0; j<q-1; j++){
            if(l[j]>l[j+1]) std::swap(l[j],l[j+1]); 
            }
        }
     k
         if (q==1) return l[0];
        else if (i==0) m=l[1]-l[0];
        else if (i==q-1) m=l[i]-l[i-1];
        else
        m=std::min(l[i+1]-l[i],l[i]-l[i-1]);
        if (m>a){
            a=m;
            r=l[i];
        }
    }
    return r;
    }
