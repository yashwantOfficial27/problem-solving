# @param {Integer[]} height
# @return {Integer}
def max_area(height)
    most_water = 0
    height.each_with_index do |val1, idx|
        height.each_with_index do |val2, index|
            if idx != index
                most_water = val1 * val2 if val1*val2 > most_water
            end
        end
    end

    return most_water
end

p max_area([1,8,6,2,5,4,8,3,7])