#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr={1,2,3,1,4,5};
    int n= arr.size();
    int k;
    cin>>k;
    if (k <= 0 || k > n) {
        cout << "Invalid value for k" << endl;
        return 1;
    }
    int st=0,end=k-1;

    while(st<(n-(k-1))){
        int max=arr[st];
        for(int i=st;i<=end;i++){
            if(arr[i]>max)
            
        max=arr[i];
            
        }
        cout<<max<<" ";
        st=st+1;
        end=st+(k-1);
    }

}