def palindrome_str(str1)
    low = 0
    high = str1.size - 1

    while low < high 
        return false if str1[low] != str1[high]
        low += 1 
        high -= 1
    end
    return true
end

def palindrome_ruby(str)
    str = str.gsub(" ", '').downcase
    # puts str
    str == str.reverse
end

# str = 'malayalam'
str = 'A man a plan a canal Panama'
# puts palindrome_str(str)
puts palindrome_ruby(str)
# puts str1.size