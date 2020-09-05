//Link  : https://practice.geeksforgeeks.org/problems/case-specific-sorting-of-strings4845/1
string caseSort(string str, int n){
    
    vector<pair<char, int>> tell;
    list<char> qUp, qLow;   
    for(char e: str){
        tell.push_back({e, isupper(e)});
        if(islower(e)) qLow.push_back(e);
        else qUp.push_back(e);
    }
    qLow.sort();qUp.sort();
    string ans="";
    for(pair<char, int> e:tell){
        if(e.second == 0){
            ans+=qLow.front();
            qLow.pop_front();
        }else{
            ans+=qUp.front();
            qUp.pop_front();
        }
    }
    return ans;
}
