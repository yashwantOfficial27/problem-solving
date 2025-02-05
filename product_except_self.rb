# @param {Integer[]} nums
# @return {Integer[]}
def product_except_self(nums)
    result, left, right = [], [], []
    
    left[0] = 1
    right[nums.length - 1] = 1

    nums.each_with_index do |num, idx|
        if idx != 0
            left[idx] = left[idx-1] * nums[idx-1]
        end
    end


    (0..nums.length-2).reverse_each do |idx|
        right[idx] = right[idx+1] * nums[idx+1]
    end

    (0..nums.length-1).each do |idx|
        result[idx] = left[idx] * right[idx]
    end

    return result
end

# product_except_self([1, 2, 3, 4])
p product_except_self([2,1,3,4])