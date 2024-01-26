#include <iostream>
using namespace std;  // This line allows us to use names from the std namespace directly

int main() {
    int nums[7] = {2,4,3,5,6,8,9};
    int target = 15 ; 
    int index1 = 0;
    int index2 = 1;
    int sum = 0;
    for(int i=0;i<7;i++){
        if(sum == target){
            break ;
        };
        for(int j=0;j<7;j++){
            if(nums[i] + nums[j] == target){
                index1 = i ;
                index2 = j ;
                cout << "Elements Found at index "<<index1<<" and "<<index2;
                sum = target ;
                break;
            };
            if(sum == target){
                break;

            };
        };
    }
    return 0;
}
