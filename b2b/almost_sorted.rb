def is_almost_sorted_array?(nums)
  count = 0

  (1...nums.length).each do |i|
    if nums[i] < nums[i - 1]
      count += 1
      return false if count > 1

      if i > 1 && nums[i] < nums[i - 2]
        nums[i] = nums[i - 1]   # fix current
      else
        nums[i - 1] = nums[i]   # fix previous
      end
    end
  end

  true
end

nums = [3,4,4,3]
puts is_almost_sorted_array?(nums)


# [3,4,4,3]