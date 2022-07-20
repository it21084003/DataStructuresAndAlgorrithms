#include <iostream>
int linearsearch(int nums[],int arrSize,int key){
    int i = 0;
    for (int i = 0; i < arrSize; ++i) {
        if(nums[i] == key){
            return i;
        }
    }
    return -1;

}

int main() {       //low                                                                high
    int nums[] = {2,5,10,11,15,16,17,19,25,30,40};
    int key = 0;
    printf("Please enter a number to find:");
    scanf("%d", &key);

    int arrSize  =sizeof(nums)/sizeof(nums[0]);
    int foundIndex = linearsearch(nums, arrSize, key);
    if(foundIndex != -1){
        printf("We found data at index : %d", foundIndex);
    }else{
        printf("We cannot found");
    }



    return 0;
}
