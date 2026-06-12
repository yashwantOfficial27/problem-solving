def even_sum(nums)
    # nums.inject(0) {|val| val.even?}
    sum = 0
    nums.each_with_index do |num, idx|
        sum += num if num.even? && idx.even?
    end
    sum

    # nums.select(&:even?).sum
end

nums = [2, -2, 4, -4, 6]
puts even_sum(nums)