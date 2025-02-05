# @param {Integer[]} candies
# @param {Integer} extra_candies
# @return {Boolean[]}
def kids_with_candies(candies, extra_candies)
    result = []
    highest_candy = candies.max
    candies.each_with_index do |candy, index| 
        result[index] = candy+extra_candies >= highest_candy ?  true :  false
    end

    return result
end

puts kids_with_candies([12,1,12], 10)