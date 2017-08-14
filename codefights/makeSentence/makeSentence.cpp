string o, makeSentence(auto w) {
    
    for (int j,i=0; i<w.size(); i++){
        if (i) o+=" ";
        for (j=0; j<w[i].size();) o+=w[i][j++];
    }
    return o+".";
}

