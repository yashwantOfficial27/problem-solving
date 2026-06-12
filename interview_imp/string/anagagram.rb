def isValidAnagram?(str1, str2)
    return false if str1.size != str2.size
    arr1 = []
    arr2 = []
    str1.each_char do |c|
        arr1 << c 
    end

    str2.each_char do |c|
        arr2 << c 
    end
    
    arr1.sort!
    arr2.sort!

    flag = true
    arr1.each_with_index do |element, idx|
        if element != arr2[idx]
            flag = false
            break
        end
    end

    if flag
        # puts "valid"
        return true
    end

    return false

end

def isValidAnagramOptimized?(str1, str2)
    return str1.chars.sort == str2.chars.sort
end

def isValidAnagramUsingFrequencyMap?(str1, str2)
    hash1 = Hash.new{0}
    hash2 = Hash.new{0}

    str1.each_char do |c|
      hash1[c] += 1
    end

    str2.each_char do |c|
        hash2[c] += 1
    end

    return hash1 == hash2

    # puts hash1
    # puts hash2
end


str1 = 'listen'
str2 = 'silent'
# brute force apporach
# puts isValidAnagram?(str1, str2)

# optimized
# puts isValidAnagramOptimized?(str1, str2)

# puts isValidAnagramUsingFrequencyMap?(str1, str2)



def anagramBasic(str1, str2)
    return str1.chars.sort == str2.chars.sort
end

def anagramUsingHash(str1, str2)
    hash1 = Hash.new(0)
    hash2 = Hash.new(0)

    str1.each_char do |char|
        hash1[char] += 1
    end

    str2.each_char do |char|
        hash2[char] += 1
    end

    return hash1 == hash2
end

# puts anagramBasic('listen', 'silen')
puts anagramUsingHash('listen', 'silent')