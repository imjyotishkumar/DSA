# Question 1 : 
     You have a set of integers, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated  to another number in the set, which results in repetition of one number and loss of  another number. 
     You are given an integer array nums representing the data status of this set after the 
     error. 
    Find the number that occurs twice and the number that is missing and return them in 
    the form of an array. [ Go to Qs ] 
    Example : 
    Input: nums = [1,2,2,4] Output: 
    [2,3]
# question 2: 
     You are given an integer array height of length n. There are n vertical 
    lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]). 
    Find two lines that together with the x-axis form a container, such that the container 
    contains the most water. Return the maximum amount of water a container can 
    store. 
    Notice that you may not slant the container. [ Go to Qs ] 
    Input: height = [1,8,6,2,5,4,8,3,7] 
    Output: 49 
    Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this 
    case, the max area of water (blue section) the container can contain is 49.    
# question 3:
    Given an integer array nums, return all the triplets [nums[i], nums[j], 
    nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0. 
    Notice that the solution set must not contain duplicate triplets. [ Go to Qs ] 
    Input: nums = [-1,0,1,2,-1,-4] 
    Output: [[-1,-1,2],[-1,0,1]] 
    Explanation: 
    nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0. 
    nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0. 
    nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0. The 
    distinct triplets are [-1,0,1] and [-1,-1,2]. 
    Notice that the order of the output and the order of the triplets does not matter. 
    Input: nums = [0,1,1] Output: 
    [ ] 
    Explanation: The only possible triplet does not sum up to 0.    

# Note - Read up about the in-built sorting of vectors.
       