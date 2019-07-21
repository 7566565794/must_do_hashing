using namespace std;

int ZeroSum(int a[], int n){
    int sum = 0, c = 0;
    unordered_map<int,int>m;
    for(int i=0; i<n; i++){
        sum +=a[i];
        if(sum==0)
            c++;
        if(m.find(sum)!=m.end())
            c+=m[sum];
        m[sum]++;
    }
    return c;
}

int main()
 {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++)
	        cin>>a[i];
	    
	    cout<<ZeroSum(a,n)<<endl;
	}
	return 0;
}
