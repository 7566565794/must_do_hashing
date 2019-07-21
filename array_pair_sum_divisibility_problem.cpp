using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int sum = 0;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    int k;
	    cin>>k;
	    if(n%2 || sum%k)
	        cout<<"False";
	    else
	        cout<<"True";
	    cout<<endl;
	}
	return 0;
}
