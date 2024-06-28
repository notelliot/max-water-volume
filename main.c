#include <stdio.h>

int get_max(int nums[], int size){
    int max_pos = 0;
    for(int i = 0; i < size; i++){
	if(nums[max_pos] < nums[i]){
	    max_pos = i;
	}
    }

    return max_pos;
}

int get_water_volume(int nums[], int size, int max_pos){
    int water_volume = 0;
    int temp_volume;
    for(int i = max_pos; i < size - 1; i++){
	temp_volume = nums[max_pos] * nums[i + 1];
	if(temp_volume >= water_volume){
	    water_volume = temp_volume;
	}
    }

    return water_volume;
}

int main(){
    int nums[] = {1,9,6,2,5,4,8,3,7};
    int size = sizeof(nums)/sizeof(nums[0]);
    int max_pos = get_max(nums, size);

    printf("max water volume: %d", get_water_volume(nums, size, max_pos));

    return 0;
}
