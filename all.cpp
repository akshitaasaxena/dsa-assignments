#include <bits/stdc++.h>
using namespace std;
// next greater
vector<int> nextgreater(int arr[], int n){
    vector<int> ans(n);
    stack<int> s;
    
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && s.top()<=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }
    return ans;
    
}
//previous greater
vector<int> previousgreater(int arr[],int n){
    vector<int> ans(n);
    stack<int> s;
    
    for(int i=0;i<=n-1;i++){
        while(!s.empty() && s.top()<=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}
// next smaller
vector<int> nextsmaller(int arr[],int n){
    vector<int> ans(n);
    stack<int> s;
    
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}
// previous smaller
vector<int> previoussmaller(int arr[],int n){
    vector<int> ans(n);
    stack<int> s;
    
    for(int i=0;i<=n-1;i++){
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}
int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = nextgreater(arr, n);
    for(int x : ans)
        cout << x << " ";
    cout << endl;

    vector<int> ans1 = nextsmaller(arr, n);
    for(int x : ans1)
        cout << x << " ";
    cout << endl;

    vector<int> ans2 = previoussmaller(arr, n);
    for(int x : ans2)
        cout << x << " ";
    cout << endl;

    vector<int> ans3 = previousgreater(arr, n);
    for(int x : ans3)
        cout << x << " ";
    cout << endl;

    return 0;
}
