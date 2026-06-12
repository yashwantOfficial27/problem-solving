def executor(inputCmd, inputNum)
    result = []
    inputCmd.each_with_index do |ele, idx|
        case ele
        when 'ArrayStack'
            arr = Array.new
            result << nil
        when 'isEmpty'
            result << arr.empty?
        when 'push'
            arr.push(inputNum[idx])
            result << nil 
        when 'pop'
            result << arr.pop
        end
    end
    return result
end

inputCmd = ["ArrayStack", "isEmpty", "push", "pop", "isEmpty"]  
inputNum = [[], [], [1], [], []] 

puts executor(inputCmd, inputNum)