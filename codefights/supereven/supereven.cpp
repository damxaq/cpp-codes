int i=2,s=1,z,r,l,j, supereven(int k) {
    
    for(;s<=k;i+=2){
        l=i;
        r=1;
        j=0;
        while(l){
        z=l%10;
        if (z%2==1) {
            r=0;
            i=i>9?i+pow(10,j)-2:i;
            break;
                    }
            j++;
        l/=10;
    }
        if (r) s++;
    }
return i-2;
}

