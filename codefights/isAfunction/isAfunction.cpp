bool isAfunction(std::vector< std::vector< double > > pairs) {
    std::vector< std::vector< double > > t=pairs;
    for (int i=0; i<t.size();i++){
        for (int j=0; j<t.size();j++){
            if(t[i][0]==t[j][0] && i!=j){
                if (t[i][1]!=t[j][1]) return false;
            }
        }
    }
    return true;

}

