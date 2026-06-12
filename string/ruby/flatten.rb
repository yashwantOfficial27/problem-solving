def flattenArr(arr)
    puts arr.flatten.inspect
end

def flattenRecursive(arr)
    flat = []
    arr.each do |element|
        if element.is_a?(Array)
            flat.concat(flattenRecursive(element))
        else
            flat << element
        end
    end

    flat 
end

arr = [1,2,[3,4,[5,6,7]]]
# flattenArr(arr)
puts flattenRecursive(arr).inspect