std::vector<int> ToFraction(double n) {
    
    double x=n;
    int y=9,i=0,j;
    while (x!=y){
        i++;
        x=n*pow(10,i);
        y=n*pow(10,i);  
    }
    i=pow(10,i);
    for (j=y; j>0; j--) if (y%j==0 && i%j==0) break;
    return {y/j , i/j};
}

