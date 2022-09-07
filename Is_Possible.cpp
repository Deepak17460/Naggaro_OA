 #include<bits/stdc++.h>


 using namespace std;

int ans=0;

 bool Helper(int a,int b,int x,int y){
    // base case
    if(a!=x && (b+a)>x)
          return 0;
    if(b!=y && (b+a)>y)
        return 0;
    if(a==x && b==y){
    //ans=1;
         return 1;
            }
   bool n1= Helper(a+b,b,x,y);
   bool n2= Helper(a,a+b,x,y);
   cout<<n1<<" "<<n2<<endl;
   return n1||n2;
}
 int main(){
     int a,b;
     cin>>a>>b;
     int x,y;
     cin>>x>>y;
     string Y="Yes";
     string n="No";
     cout<<Helper(a,b,x,y)<<endl;;
         if(ans==1){
             cout<<Y<<endl;
         }
         else
         {
             cout<<n<<endl;
         }
 }
