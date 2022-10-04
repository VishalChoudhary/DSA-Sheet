/*Basic Principle of Bubble Sort
*The two adjacent elements are compared then swapped acc to the asc/desc;
*/
#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main(){
    int data[] = {-2, 45, 0, 11, -9};
    int size = sizeof(data) / sizeof(data[0]);
    bubbleSort(data, size);
    cout << "Sorted Array in Ascending Order:\n";  
    printArray(data, size);
}