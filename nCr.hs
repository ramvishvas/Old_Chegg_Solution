-- to run this code
-- 1) type "ghci" in terminal without double quote
-- 2) compile and load>> :load filename.hs
-- 3) run>> :main

-- factorial function
fact :: Integer -> Integer
fact 0 = 1 -- base condition
fact n | n > 0 = n * fact (n-1) -- recursive call

main = do  
    -- getting 1st inpur
    putStr "Enter n : " 
    input1 <- getLine
    -- getting 2nd input
    putStr "Enter r : " 
    input2 <- getLine

    -- converting input to Integer because initially input is string
    let n = (read input1 :: Integer)
    let r = (read input2 :: Integer)
    -- applying formula of nCr = n! / ((n-r)! * r!)
    let res = (fact n) `div` ((fact (n-r)) * (fact r))
    -- printing result
    putStr "nCr = "
    print(res)