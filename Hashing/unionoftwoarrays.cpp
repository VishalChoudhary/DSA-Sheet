 #include<bits/stdc++.h>
 using namespace std;

void twoArrays(int a[],int n,int b[],int m){
    unordered_set<int> uset;
    int count=0;
    for(int i=0;i<n;i++)
    uset.insert(a[i]);
     
    for(int i=0;i<n;i++)
    uset.insert(b[i]);

    for(auto it=uset.begin();it!=uset.end();it++){
    cout<<(*it)<<" ";
    count++;}

    cout<<endl;
    cout<<count;

}

int main(){
    int a[]={85 ,25 ,1 ,32, 54 ,6};
    int b[]={85,2};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    twoArrays(a,n,b,m);
    // return 0;
}