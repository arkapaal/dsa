#include<bits/stdc++.h>
using namespace std ;
int main (){
    int n;
    cout <<"Enter the number of elements in the array"<<endl;

    cin>>n;
    int arr[n];

    for (int i =0;i<n;i++){
        cin>>arr[i];

    }

    // precompute 
    map<int ,int >mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;

    }
    //iterate in the map
    int maxf;

    for(auto it:mpp){
        cout<<it.first <<"-->"<<it.second<<endl;

    }for(auto  it:mpp)
    {
        if(it.second>maxf) maxf=it.second;
        else if(it.second =maxf)  it.second = maxf;
    }
    cout << maxf;

    
    
       // int q ;
        //cout<<"Enter the number of queries"<<endl;
       // cin >>q ;
       // while(q--){
       //     int numbers;
//
        //    cin>>numbers;
        //    cout<<mpp[numbers]<< endl;

  //  }
}
