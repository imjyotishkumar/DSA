
var nums=[1,2,3,4,5,6,7,8]
var twoSum = function(nums, target) {
    for(let i = 0; i< nums.length; i++){
        for(let j = i + 1; j< nums.length; j++){
            if(nums[i] + nums[j] == target){
                return [i, j];
            }
        }
    }
    return [0, 1]
    
}
print(twoSum(nums,7))