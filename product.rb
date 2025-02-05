# def product_of_self(nums)
#     result = []
#     nums.each_with_index do |element, index|
#         product = 1
#         nums.each_with_index do |ele, jindex|
#             if index != jindex
#                 product = product * ele
#             end
#         end
#         result << product
#     end
#     result
# end


def product_of_self(nums)
    prefix, postfix, result = [0], [0], [0]
    prod = 1
    nums.each_with_index do |num, idx|
        prefix << num * prod
        prod = prod * num
    end
    
    len = nums.length - 1
    p len
    right_cursor = len
    prod = 1
    while (right_cursor >= 0)
        p nums[right_cursor]
        postfix[right_cursor] <<  nums[right_cursor] * prod
        prod = nums[right_cursor] * prod
        right_cursor = right_cursor - 1
    end
    postfix
end



p product_of_self([1, 2, 3, 4])
# p product_of_self([-1,1,0,-3,3])


# take you forward