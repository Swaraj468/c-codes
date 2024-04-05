#include<bits/stdc++.h>
using namespace std;

bool ispresent(int arr[][4], int target, int row, int column){
    for(int row=0; row<3; row++){
        for(int column=0; column<4; column++){
            if(arr[row][column] == target){
                return 1;
            }
        }
     }
 return 0;
}

int main(){
    int arr[3][4];
     
    //  row wise input
     for(int row=0; row<3; row++){
        for(int column=0; column<4; column++){
            cin>>arr[row][column];
        }
     }


    // column wise input
    // for(int column=0; column<4; column++){
    //     for(int row=0; row<3; row++){
    //         cin>>arr[column][row];
    //     }
    // }

     for(int row=0; row<3; row++){
        for(int column=0; column<4; column++){
            cout<<arr[row][column]<<" "; // Changed >> to <<
        }
        cout<<endl;
}
cout<<" Enter the element to search "<< endl;
int target;
cin>> target;
if(ispresent(arr, target, 3, 4)){
    cout<<" Element found "<<endl;
}
else{
    cout<<" NOT FOUND "<<endl;
}
 return 0;
}









// copilot corrected codrow
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[3][4];
     
//      for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             cin>>arr[i][j];
//         }
//      }
//      for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){ // Start from j=0
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl; // Print newline after each row
//      }
//  return 0;
// }