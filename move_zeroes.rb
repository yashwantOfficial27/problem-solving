# @param {Integer[]} nums
# @return {Void} Do not return anything, modify nums in-place instead.
def move_zeroes(nums)
    # count = 0
    # nums.map{ |num| count += 1 if num ==0 }
    # nums.keep_if {|num| num!=0 }
    # count.times do 
    #     nums << 0
    # end
    # nums

    start = 0
    for i in 0..nums.length-1 do
        if nums[start] != 0
            start += 1
        end
        if nums[start] == 0 and nums[i] != 0
            nums[start] = nums[i]
            nums[i] = 0
            start += 1
        end
    end
    nums
end

p move_zeroes([0,1,0,3,12])
# p move_zeroes([0])