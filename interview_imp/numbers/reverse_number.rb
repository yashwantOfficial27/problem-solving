def reverse_number(n)
    return n if n <= 9 
    rem = 0
    temp = 0

    while n != 0
        rem = n%10
        temp = temp * 10 + rem
        n = n/10
    end

    return temp
end

puts reverse_number(258)