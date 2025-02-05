def increasing_triplet(nums)
    count = 1
    prev = -1

    nums.each do |num|
        if num > prev 
            prev = num 
            count = count +1
            if count >= 4
                return true
            end
        else
            count = 1
            prev = -1
        end
    end
    return false
end

# p increasing_triplet([1,2,3,4,5]) #true
# p increasing_triplet([5,4,3,2,1]) #false
p increasing_triplet([2,1,5,0,4,6]) # true
# p increasing_triplet([2,4,-2,-3])
