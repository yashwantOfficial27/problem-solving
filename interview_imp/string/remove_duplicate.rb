def remvove_duplicate(arr)
    # method 1
    puts arr.uniq.inspect   # works fine


    # method 2
    h = Hash.new{0}
    arr.each do |element|
        h[element] += 1
    end

    temp_arr = h.keys
    puts temp_arr.inspect
end

def remvove_duplicate_by_logic(arr)
    result = []
    seen = {}

    arr.each do |element|
        if !seen[element]
            result << element
            seen[element] = true 
        end
    end

    puts result.inspect
end 

arr = [1,2,2,3,4,4]
# remvove_duplicate(arr)
remvove_duplicate_by_logic(arr)