def decToBin(n)
    rem_arr = []
    while n > 0
        rem_arr << n%2
        n = n/2

    end
    rem_arr.reverse.join
end


def recursiveForBin(n, rem_arr)
    if n <= 0
        return rem_arr.reverse.join
    end 
    rem_arr << n%2
    recursiveForBin(n/2, rem_arr)
end

# puts decToBin(25)
puts recursiveForBin(25, [])