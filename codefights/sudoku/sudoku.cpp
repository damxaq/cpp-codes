bool czek (int tab[9]){
    for (int i=0; i<9; i++){
        for (int j=i+1; j<9; j++){
            if (tab[j]==tab[i]) return 1;
            std::cout<<tab[j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}

bool Sudoku(std::vector<std::vector<int>> s) {
    
    int tab[9], tab2[9], tab3[9];
    
    for (int i=0; i<9; i++){
        
        
        for (int j=0; j<9; j++){
            
            tab[j] = s[i][j]; 
            tab2[j] = s[j][i];
            
        }
        
        if (czek(tab)) return 0;
        if (czek(tab2)) return 0;
    }
    
    int x=0,y=0;
    for (int k=0; k<9; k++){
     int ind=0;
        
    for (int i=y; i<y+3; i++){
        for (int j=x; j<x+3; j++){
            
            tab3[ind]=s[i][j];
            ind++;
        }
    }   
        x+=3;
        if (x>6){
            x=0;
            y+=3;
        }
        if (czek(tab3)) return 0;
    }
return 1;
}
