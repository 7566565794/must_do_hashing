using namespace std;

string smallWin(string s1, string s2){
    if(s2.length()>s1.length()){
        // cout<< "-1";
        return "";
    }
    int min_len = INT_MAX;
    int cs1[256] = {0};
    int cs2[256] = {0};
    int s = 0,news = -1;
    for(int i=0; i<s2.length(); i++)
        cs2[s2[i]]++;
    int j=0;
    int count = 0;
    for(j=0; j<s1.length(); j++){
        cs1[s1[j]]++;
        if(cs2[s1[j]]>=cs1[s1[j]] && cs2[s1[j]])
            count++;
        if(count==s2.length()){
            while(cs1[s1[s]]>cs2[s1[s]] || !cs2[s1[s]]){
                if(cs1[s1[s]]>cs2[s1[s]])
                    cs1[s1[s]]--;
                s++;
            }
            int len = j-s+1;
            if(min_len>len){
                min_len = len;
                news = s;
            }
        }
        
    }
    if(news==-1)
        return "";
    else
        return s1.substr(news,min_len);
        
}
int main()
 {
	int t;
	cin>>t;
	
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    string ans = smallWin(s1,s2);
	    ans.size()==0?cout<<"-1":cout<<ans;
	    cout<<endl;
	}
	return 0;
}
