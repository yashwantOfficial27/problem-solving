def two_sum(arr, k)
  arr.each_with_index do |val1, idx1|
    arr.each_with_index do |val2,idx2|
      next if idx2 <= idx1 
      
      return idx1, idx2 if val1+val2 == k
    end 
  end
  return -1, -1
end

def two_sum_with_complement(arr, target)
  seen = {}

  arr.each_with_index do |val, idx| 
    complement = target - val
    seen.find
  end 
end

p two_sum([1,2,3,4], 8)
# 1,2,3,4 
# sum = 3