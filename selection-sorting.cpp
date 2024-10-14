#include<iostream>
    using namespace std;
    int main(){
        int arr[100],step,i,j,min,size;
        cout<<"Enter size of array:"<<endl;
        cin>>size;
        cout<<"Enter elements of array:"<<endl;
        for(i=0;i<size;i++){
            cin>>arr[i];
        }
        for(step=0;step<size;step++){
            min=step;
            for(i=step+1;i<size;i++){
                if(arr[i]<arr[min]){
                    min=i;
                 if(min!=step){
                    
                    int temp=arr[step];
                    arr[step]=arr[min];
                    arr[min]=temp;
                }
                }
            }
        }
        cout<<"elements after sorting:"<<endl;
        for(i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }