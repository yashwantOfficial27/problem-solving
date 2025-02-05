def can_place_flower(flowerbed, n)
    count = 0
    len = flowerbed.length
    flowerbed.each_with_index do |bed, index|
        # puts "bed = #{bed}, #{flowerbed[index+1]}, #{flowerbed[index+2]}\n"
        if bed == 0  && (flowerbed[index+1] == 0 && flowerbed[index+2] == 0 && (flowerbed[index +3] == 0 || flowerbed[index +3].nil?))
            count = count + 1
            flowerbed[index+2] = 1
            # puts "index => #{index} and bed = #{bed}"
        elsif (index == 0 and bed == 0 and (flowerbed[index+1] ==0 || flowerbed[index+1].nil? )) 
            count = count  + 1
            flowerbed[index] = 1
        elsif index == len - 1 and flowerbed[index-1] == 0
            count += 1
            flowerbed[index] = 1
        end
    end
    # puts  count
    return count == n ? true : false 
end

# puts can_place_flower([0,0,1,0,0],2)
# puts can_place_flower([1,0,0,0,1],2)
# puts can_place_flower([1,0,0,0,1],1)
puts can_place_flower([0, 0],2)