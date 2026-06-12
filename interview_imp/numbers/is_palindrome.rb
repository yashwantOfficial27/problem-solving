def is_palindrome?(n)
    temp = 0
    n_dup = n
    
    while n != 0
        rem = n%10
        temp = temp * 10 + rem
        n = n/10
    end

    return temp == n_dup
end

n = 12321
puts is_palindrome?(n)