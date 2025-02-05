# @param {Character[]} chars
# @return {Integer}
def compress(chars)
    len =  chars.length - 1
    prev = chars[0]
    chars[len+1] = '' 
    count, final_count = 0, 0
    result = []
    chars.each_with_index do |char, idx|
        # puts "#{idx} iteation : #{char}"
        if prev == char
            # puts "if"
            count += 1
            prev = char
        else
            # puts "else"
            # puts count
            # final_count += count
            # p count
            result << prev
            digit_arr = count.to_s.chars if count != 1
            digit_arr.map { |num| result << num} if count != 1
            count = 1
            prev = char
        end
        # puts "iteration end "
    end
    p result
end

#  compress(["a","a","b","b","c","c","c"])
#  compress(["a","b","b","b","b","b","b","b","b","b","b","b","b"])
 compress(["a","a","b","b","c","c","c"])