#include<iostream>
#include <climits>
using namespace std;
 //int main(){
/*int arr[5]={1,2,3,4};                          *output of array
for (int i=0;i<=3;i++){
cout<<arr[i];  //i=index number ....the number of array
}    
return 0;
}*/
//now if you dont know what will be the last index...to know that do tthis
//index will be 1 less than the length and to get length divide sizeof array
// to sizeof int or any type

/*int arr[5]={1,2,3,4};
int l=sizeof(arr)/sizeof(int);             //l=length of arr
for (int i=0;i<l;i++){                      //i<l mtlb ki length se 1 number pehle run jana
cout<<arr[i];  }
return 0;
}*/
                               //input of array
/*int arr[6];
int n=sizeof(arr)/sizeof(int);
for (int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
    cout<<"the output is: "<<arr[i]<<endl;
}return 0;}
    //aur agr arr size bhi input lena hai to cin>>n kardo fir arr[n] likhdo

*/
                                           
                                      //find the largest of array
 
//  int arr[]={1,1,2,5,3};
//  int n=sizeof(arr)/sizeof(int);   
 /*cout<<"write how much numbers you want to print"<<endl;
 cin>>n;
 cout<<n<<endl;                                   taking n and arr from user
 cout<<"write down the numbers"<<endl;
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }       */

//     int imax=arr[0];   
//  for(int i=0;i<n;i++){
//     if(arr[i]>imax){
//         imax=arr[i];
        
//         }}
//     cout<<"the greatest number in this array is:"<<imax;
//     return 0;
//  }              
                                        //  array as pointers
// int arr[]={1,2,3,4,5};
// int n=sizeof(arr)/sizeof(int);
//   cout<<*arr<<endl;
//   cout<<*(arr+2)<<endl;
//    return 0;
// }
                                    //linear search
//  int linearsearch(int *arr,int num,int key){
//     for(int i=0;i<num;i++){
// if(arr[i]==key){
//     return i;
//     }


// }return -1;
//  }
//  int main(){
 
//  int arr[]={1,2,5,7,9,3};
//  int n=sizeof(arr)/sizeof(int);
//  int key=7;
// cout<<linearsearch(arr,n,44);

// return 0;
// }
                                        //  reversing an array

// int printarr(int *arr,int n){
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<",";
// }
// }
// int main(){
//     int arr[]={2,34,5,5,3};
//     int n=sizeof(arr)/sizeof(int);
//     int st=0;
//     int ed=n-1;
//     while(st<ed){
//          int temp=arr[st];
//    arr[st]=arr[ed];
//    arr[ed]=temp;
//         st++;
//         ed--;
//     }
//     printarr(arr,5);
// return 0;}
                                            //binary search
// int binarysearch(int key,int n,int *arr){
// int st=0;
// int end=n-1;
// while(st<=end){
//     int mid=(st+end)/2;
// if(arr[mid]==key){
//         return mid;
//     }
//    else if(arr[mid]>key){
//     end=mid-1;  
// }else{
//     st=mid+1;
// }
// }return -1;}
// int main(){
// int arr[]={1,2,6,44,56};
// int n=sizeof(arr)/sizeof(int);



// cout<<binarysearch(44,n,arr)<<endl;
// return 0;}
                                                              //subarray
//  int main(){
//     int arr[5]={1,2,3,4,5}; 
// int n=sizeof(arr)/sizeof(int);
// for(int st=0;st<n;st++){
//    for(int end=st;end<n;end++){
//       for(int i=st;i<=end;i++){
//            cout<<arr[i];} cout<<", ";
//            }
//                  cout<<endl;
// }
                                    //subarray nikal uper liya ab max term nikalenge
// void addsum(int *arr,int n){
//     int maxn=0;
// for(int st=0;st<n;st++){
//     for(int end=st;end<n;end++){
//         int currsum=0;
//         for(int i=st; i<=end;i++){
//             currsum+=arr[i];
            
//         }cout<<currsum<<",";
//        maxn=max(maxn,currsum);
     
//     }cout<<endl;
// }cout<<"max term is:"<<maxn;
// }

// int main(){
//     int arr[6]={2,-3,6,5,4,2};
//     int n=sizeof(arr)/sizeof(int);
//  addsum(arr,n);

// return 0;
//  }                                    
                                                    //same but optimised
// void addsum(int *arr,int n){
//     int maxn=0;
// for(int st=0;st<n;st++){
//     int currsum=0;                  //ise hmne pehle hi initialize krdiya taki loop m iska sum le aaye
//     for(int end=st;end<n;end++){
        
    
//                 currsum+=arr[end];    //isme end krdiya taki st aur end saem jgh aajaye
     
            
//         cout<<currsum<<",";
//        maxn=max(maxn,currsum);
     
//     }cout<<endl;
// }cout<<"max term is:"<<maxn;
// }

// int main(){
//     int arr[6]={2,-3,6,-5,4,2};
//     int n=sizeof(arr)/sizeof(int);
//  addsum(arr,n);

// return 0;
//  }                                    
                                                          //by kadane algorithm
// void maxsu(int *arr,int n){
    
//     int maxsum= INT_MIN;
//     int currentsum =0;
//     for(int i=0;i<n;i++){
//         currentsum+=arr[i];
//         maxsum=max(currentsum,maxsum);
//         if(currentsum<0){
//             currentsum=0;
//         }
//     } cout<<"max no. is:"<<maxsum<<endl;
// }                  
// int main(){
    

    
//     int arr[6]={2,-3,6,-5,4,2};
//     int n=sizeof(arr)/sizeof(int);
//     maxsu(arr,n);
    
//     return 0;
// }
                                                             //buy and sell stocks my approach

// void stocks(int *prizes, int n) {
//     int minPrice = prizes[0];
//     int maxProfit = 0;
    
//     for(int i = 1; i < n; i++) {
//         // Keep track of minimum price seen so far
//         minPrice = min(minPrice, prizes[i]);
//         // Calculate potential profit if we sell at current price
//         int currentProfit = prizes[i] - minPrice;
//         // Update max profit if current profit is larger
//         maxProfit = max(maxProfit, currentProfit);
//     }
//     cout << "Best profit: " << maxProfit << endl;
// }
// int main(){
//     int prizes[6]={7,1,5,3,6,4};
//     int n=sizeof(prizes)/sizeof(int);
//     stocks(prizes,n);
//     return 0;
// }
// void stocks(int *prices,int n){
// int bestbuy[100000];
// bestbuy[0]=INT_MIN;
// for(int i=0;i<n;i++){
//         bestbuy[i] = min(bestbuy[i-1],prices[i-1]);
// }
// int maxprofit=0;
// for(int i=0;i<n;i++){
//     int currentprofit=prices[i] - bestbuy[i];
//     maxprofit = max(maxprofit,currentprofit);

// }
// cout<<"max profit="<<maxprofit<<endl;}
// int main(){
//     int prizes[6]={7,1,5,3,6,4};
//     int n=sizeof(prizes)/sizeof(int);
//     stocks(prizes,n);
//     return 0;
// }
                                        //buy and sell again after break
