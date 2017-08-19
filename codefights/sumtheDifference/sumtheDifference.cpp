int s=0,n,l,k=1,i=0,q,SumtheDifference(auto e) {

    for(; i<e.size(); i++){
        q=e[i];
        if (q==32) k++;
        else{
            n=-1;
            if (e[i-k]==45 && i>0) n=1;
            if (q>47 && q<58){
                l=q-48;
                s+=l%2==0?(-1*n)*l:-(-1*n)*l;
            }
            k=1;
        }
    }
    return s;
}

