// Time Complexity is O(n) & Space Complexity is O(n)



 #include<bits/stdc++.h>


 using namespace std;

bool IsPossibleTomakesecondArray(vector<int>&arr1,vector<int>&arr2,int n){
          stack<int>st;
          int i=0,j=0;
          while(j<n){
              while(i<n && (st.empty()||st.top()!=arr2[j])){
                  st.push(arr1[i++]);
              }
              if(!st.empty()&&st.top()==arr2[j]){
                  st.pop();
                  j++;
              }
              else{
                  return 0;
              }
          }
          return 1;
}

 int main(){
     int n,m;
     cin>>n>>m;
     vector<int>arr1(n);
     vector<int>arr2(m);
     for(int &i:arr1) cin>>i;
     for(int &i:arr2) cin>>i;
     cout<<IsPossibleTomakesecondArray(arr1,arr2,n)<<endl;
      
 }
