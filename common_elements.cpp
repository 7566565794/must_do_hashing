using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n1, n2, n3;
	    map<int,int>m;
	    cin>>n1>>n2>>n3;
	    int a[n1],b[n2],c[n3];
	    for(int i=0; i<n1; ++i){
	        cin>>a[i];
	        if(m.find(a[i])==m.end())
	            m[a[i]] = 1;
	    }
	    for(int i=0; i<n2; ++i){
	        cin>>b[i];
	        if(m.find(b[i])!=m.end() and m[b[i]]==1)
	            m[b[i]]++;
	    }
	    for(int i=0; i<n3; ++i){
	        cin>>c[i];
	        if(m.find(c[i])!=m.end() and m[c[i]]==2)
	            m[c[i]]++;
	    }
	    int flag = 0;
	    for(auto i=m.begin(); i!=m.end(); ++i){
	        if(i->second==3){
	            flag = 1;
	            cout<<i->first<<" ";
	        }
	    }
	    if(!flag)
	        cout<<"-1";
	    cout<<endl;
	}
	return 0;
}
