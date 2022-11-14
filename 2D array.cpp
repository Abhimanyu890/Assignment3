#include <iostream>
using namespace std;
int main() {
int m , n ;
cin>>n>>m;
int A[n][m];

for(int row=0;row<n ;row++){

    for(int col=0;col<m;col++){
cout<<"enter the element of matrix"<<endl;
        cin>>A[row][col];
    }
}


        int sum=0;
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
        

        sum +=A[row][col];
    }
}

cout<<"sum"<<sum;

 return 0;
}