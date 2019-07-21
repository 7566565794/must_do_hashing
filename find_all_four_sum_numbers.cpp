using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int arr[100005];
	    int n,k;
	    cin>>n>>k;
        map<int,int>freq_array;
        set< vector<int> >s;

	    for(int i=0;i<n;i++){
	        cin>>arr[i];
            freq_array[arr[i]]++;
	    }
	    sort(arr,arr+n);
        multimap<int,pair<int,int>>pairs;   
	    map<int,vector<pair<int,int>>>m;   
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            pair<int,int>p;
	            p=make_pair(arr[i],arr[j]);
	            m[arr[i]+arr[j]].push_back(p);
                pairs.insert({arr[i]+arr[j],p});       
	        }
	    }
	   
	   for(auto i=pairs.begin();i!=pairs.end();i++)
	    {   
	        pair<int,int>p;
	        p=i->second;  
	        int sum=i->first;
	        int diff=k-sum;
	        if(m.find(diff)!=m.end())
            {   vector<pair<int,int>>v;
                v=(m.find(diff))->second;
                for(auto j=v.begin();j!=v.end();j++)
                {
                    pair<int,int>req_pair;
                    req_pair=*j;
                    int arr[]={p.first, p.second, req_pair.first, req_pair.second};
                    sort(arr,arr+4);
                    map<int,int>aux_map;
                    for(int k=0;k<4;k++)
                    {
                       aux_map[arr[k]]++;
                    }
                    vector<int>arr2(4);
                    arr2[0]=arr[0];
                    arr2[1]=arr[1];
                    arr2[2]=arr[2];
                    arr2[3]=arr[3];
                    int flag=0;
                    for(auto itr=aux_map.begin();itr!=aux_map.end();itr++)
                    {
                         if(itr->second > freq_array[itr->first])
                         {
                            flag=1;
                            break;
                         }
                    }
                    if(flag==0)
                    {
                        s.insert(arr2);
                    }
                }
	        }   
	    }
        for(auto i=s.begin();i!=s.end();i++)
        {
           vector<int>v;
           v=*i;
           cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" $";
        }
        if(s.begin()==s.end()){
            cout<<-1;
        }
	    cout<<endl;
	    
	    
	}
	return 0;
}
