#include <iostream>
int binarysearchRecur(int nums[], int low, int high, int key){
    if(low > high){
        return -1;
    }
    int mid = (low+high)/2;

    if(key == nums[mid]){
        return mid;
    }else if(key < nums[mid]){
        return binarysearchRecur(nums,low, mid-1,key);
    }else{
        return binarysearchRecur(nums,mid+1,high,key);
    }
    return -1;
}

int main() {       //low                                                                high
    int nums[] = {2,5,10,11,15,16,17,19,25,30,40};
    int key = 0;
    printf("Please enter a number to find:");
    scanf("%d", &key);

    int arrSize  =sizeof(nums)/sizeof(nums[0]);
    int low = 0;
    int high = arrSize-1;
    int foundIndex = binarysearchRecur(nums, low, high, key);
    if(foundIndex != -1){
        printf("We found data at index : %d", foundIndex);
    }else{
        printf("We cannot found");
    }



    return 0;
}
