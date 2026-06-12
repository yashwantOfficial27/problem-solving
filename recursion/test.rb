def can_add?(bit, curr, n)
    open_count = curr.count("(")
    close_count = curr.count(")")

    if bit == "("
        return open_count <= n 
    else
        return close_count > open_count
    end
end

def generate(result, n, curr)
    if curr.size == n*2
        result << curr.join
        return 
    end

    ['(', ')'].each do |bit|
        next if not can_add?(bit, curr, n)
        curr << bit 
        generate(result, n, curr)
        curr.pop
    end
end

result = []
generate(result, 3, [])
puts result