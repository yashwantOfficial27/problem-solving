def frequency_of_element(arr)
    hash = Hash.new{0}
    arr.each do |element|
        hash[element] += 1
    end

    return hash
end 

arr = [1,1,2,3,4,4,4,5]
arr = ['a', 'a', 'b', 'c', 'C', 'C']
puts frequency_of_element(arr)

