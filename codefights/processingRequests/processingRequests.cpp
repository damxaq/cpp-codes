int processingRequests(int servers, std::vector< int > requests) {
    
    int s=0,e,t[servers];
    e=requests.size();
    int a[e];
    for (int i=0; i<e; i++){
        a[i]=requests[i];
    }

    for (int i=0; i<e; i++){
        for (int j=0; j<e-1; j++){
            if (a[j]>a[j+1]){
                int q=a[j];
                a[j]=a[j+1];
                a[j+1]=q;
            }     
        }
    }
    
    for (int i=0; i<servers; i++) t[i]=2*(i+1);
    for (int i=servers-1; i>=0; i--){
        for(int l=e-1; l>=0; l--){
            if (t[i]<a[l]) continue;
            else {
                s++;
                e=l;
                break;
            }
        }
    }
return s;
}

