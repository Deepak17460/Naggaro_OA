 #include<bits/stdc++.h>

 using namespace std;

// Money COnfustion
// Time Complexity is O(N^2) and Space Complexity is O(1)
int GetTheNumberOfNotes(vector<int>&arr,int n,int money){
    // Brute force approach
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            //checking 
            if(sum==money) return j-i+1;
        }
    }
    return 0;
}


 int main(){
      int n,m;
      cin>>n>>m;
      vector<int>arr(n);
      for(int &i:arr) cin>>i;

      cout<<GetTheNumberOfNotes(arr,n,m);
 }
