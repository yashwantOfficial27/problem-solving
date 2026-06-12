def prime_upto_n(n)
    return nil if n == 0 || n == 1

    (2..n).each do |ele|
        flag = true
        (2..(ele/2)).each do |divide_from|
            if ele%divide_from == 0
                flag = false 
                break
            end
        end
        puts ele if flag
    end
end

prime_upto_n(5)