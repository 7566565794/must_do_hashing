/*You are required to complete below method */
void countDistinct(int A[], int k, int n)
{
    //Your code here
    for(int i=0; i<n-k+1; ++i){
        set<int>s;
        for(int j=i; j<i+k; ++j)
            s.insert(A[j]);
        cout<<s.size()<<" ";
    }
}
