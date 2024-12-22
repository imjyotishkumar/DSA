// #include<iostream>
// using namespace std;

// void spiral(int mat[][4],int m,int n){

//     int srow=0, scol=0;
//     int erow=n-1,ecol=n-1;
    
//     while (srow<=erow&&scol<=ecol)
//     {
        
//     //top
//   for(int j=scol;j<=ecol;j++){
//     cout<<mat[srow][j]<<" ";
//   }

//     //right
// for(int j=srow+1;j<=erow;j++){
//     cout<<mat[j][ecol]<<" ";
// }
//     //bottom
// for(int i=ecol-1;i>=srow+1;i--){
//    cout<< mat[erow][i]<<" ";
//    if(srow==erow){
//     break;
//    }
// }
//     //left
//     for(int j=erow;j>=srow+1;j--){
//         cout<<mat[j][scol]<<" ";
//         if(scol==ecol){
//     break;
//    }
//     }
//     srow++;
//     scol++;
//     erow--;
//     ecol--;
//     }

    
// }

// int main(){
// int mat[4][4]={{1,2,3,4},
//                 {5,6,7,8},
//                 {9,10,11,12},
//                 {13,14,15,16}};
//     int n=4,m=4;            

//     //   spiral(mat,n,m); 

      
// int mat1[3][4]={{1,2,3,4},
//                 {5,6,7,8},
//                 {9,10,11,12}
//                         };  
//     spiral(mat1,3,4); 
 

//     return 0;
// }


#include<iostream>
using namespace std;

void spiral(int mat[][4], int m, int n){

    int srow = 0, scol = 0;
    int erow = m - 1, ecol = n - 1;
    
    while (srow <= erow && scol <= ecol) {
        
        // Traverse top row
        for(int j = scol; j <= ecol; j++){
            cout << mat[srow][j] << " ";
        }
        srow++;  // Move start row down

        // Traverse right column
        for(int i = srow; i <= erow; i++){
            cout << mat[i][ecol] << " ";
        }
        ecol--;  // Move end column left

        // Traverse bottom row (if applicable)
        if (srow <= erow) {
            for(int j = ecol; j >= scol; j--){
                cout << mat[erow][j] << " ";
            }
            erow--;  // Move end row up
        }

        // Traverse left column (if applicable)
        if (scol <= ecol) {
            for(int i = erow; i >= srow; i--){
                cout << mat[i][scol] << " ";
            }
            scol++;  // Move start column right
        }
    }
}

int main(){
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int n = 4, m = 4;
    
    spiral(mat, m, n);
    cout << endl;

    int mat1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    spiral(mat1, 3, 4); 

    return 0;
}
